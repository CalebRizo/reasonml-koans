/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual = assertEquality "AboutTypes";

type foo = int;

let meditate () => {
  let num1 = 5;

  assertEqual num1 __int__ "Types are inferred.";

  let num2 = (6 : int);

  assertEqual num2 __int__ "But you can add a type assertion to be more explicit.";

  let sum = (4 : int) + (6 : int);

  assertEqual sum __int__ "Type assertions can be added to any expression.";

  let sum2 = ((8 : int) + (3 : int) : int);

  assertEqual sum2 __int__ "Append a colon and a type to the expression and surround with parentheses.";

  let num3 : int = 7;

  assertEqual num3 __int__ "A second style allows you to type assert the right-hand side of an expression.";

  /* You cannot define type aliases inside a block, so it is defined above. */
  let num4 = (8 : foo);

  assertEqual num4 __int__ "Type aliases allow you to refer to a type by another name.";
};
