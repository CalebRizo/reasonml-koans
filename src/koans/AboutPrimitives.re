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

  assertEqual -100 __int__ "Integers can be negative.";

  assertEqual 123.45 __float__ "Floats have a decimal.";

  assertEqual -123.45 __float__ "Floats can be negative, too.";

  assertEqual (13 + 6) __int__ "Integers are added with \"+\".";

  assertEqual (13.0 +. 6.0) __float__ "Floats use a different addition symbol.";

  assertEqual (9 / 3 * 2) __int__ "Integers use the normal divide and multiply sybmols.";

  assertEqual (9.0 / 3.0 * 2.0) __float__ "Like addition, floats have their own divide and multiply symbols.";
};
