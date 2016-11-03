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
};
