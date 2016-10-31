/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutFunctions" a b message;



let meditate () => {
  let addTwo = fun (num) => 2 + num;

  let sum1 = addTwo(2);

  assertEqual sum1 __int__ "Functions are defined by \"fun\".";

  let addThree = fun num => 3 + num;

  let sum2 = addThree(2);

  assertEqual sum2 __int__ "Functions may omit the parentheses around simple, \"one unit\" arguments.";

  let sum3 = addThree 3;

  assertEqual sum3 __int__ "You may omit the parentheses when calling a function for simple, \"one unit\" arguments.";

  let sum4 = addThree (addTwo 5);

  assertEqual sum4 __int__ "Group arguments using parentheses to create simple \"one unit\" arguments."
};
