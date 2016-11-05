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

type payment =
  | Cash
  | Check int
  | CreditCard string;

let meditate () => {
  let __rating__ = None;
  let myRating = LovedIt;

  assertEqual myRating __rating__ "Variants allow you to select one value from a set of values.";

  let explanation = switch myRating {
    | None => "I have no opinion."
    | HatedIt => "It was awful!"
    | LikedIt => "It was OK."
    | LovedIt => "It was amazing!"
  };

  assertEqual explanation __string__ "Use a switch expression to evaluate a variant.  All possible values must be present in the switch.";

  let myPayment = Check 100;

  let getCheckNumber = fun (Check num) => num;

  let checkNumber = getCheckNumber myPayment;

  assertEqual checkNumber __int__ "Variant constructor data can be destructured in a function argument.";
};
