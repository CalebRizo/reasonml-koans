/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual = assertEquality "AboutLet";

let meditate () => {
  let x = 5;
  assertEqual x __int__ "Numbers should be equal."
};
