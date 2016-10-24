/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual = assertEquality "AboutPrimitives";

let meditate () => {
  assertEqual "hello" __string__ "Strings are surrounded by double quotes.";

  assertEqual 'a' __char__ "Characters are surrounded by single quotes.";

  assertEqual 100 __int__ "Integers are whole numbers.";

  assertEqual -100 __int__ "Integers can be negative."

  assertEqual 123.45 __float__ "Floats are numbers containing decimals."

  assertEqual -123.45 __float__ "Floats can be negative, too.";
};
