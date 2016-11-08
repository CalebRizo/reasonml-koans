/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutVariants" a b message;

type rating =
  | None
  | HatedIt
  | LikedIt
  | LovedIt;

type tupleVsMultipleArguments =
  | TupleArgument (int, int)
  | MultipleArguments int int;

let meditate () => {
  let __replaceme__ = None;
  let myRating = LovedIt;

  assertEqual myRating __replaceme__ "Variants allow you to select one value from a set of values.";

  let explanation = switch myRating {
    | None => "I have no opinion."
    | HatedIt => "It was awful!"
    | LikedIt => "It was OK."
    | LovedIt => "It was amazing!"
  };

  assertEqual explanation __string__ "Use a switch expression to evaluate a variant.  All possible values must be present in the switch.";

  /* See the tupleVsMultipleArguments variant definition above. */

  let sumNums = fun arg => switch arg {
    | TupleArgument (a, b) => a + b
    | MultipleArguments a b => a + b
  };

  let nums1 = TupleArgument (1, 3);
  let tupleResult = sumNums nums1;

  assertEqual tupleResult __int__ "Using a tuple in a variant constructor is not the same as using multiple arguments.";

  let nums2 = MultipleArguments 2 5;
  let multipleArgsResult = sumNums nums2;

  assertEqual multipleArgsResult __int__ "Using multiple arguments in a variant constructor is not the same as using a tuple.";
};
