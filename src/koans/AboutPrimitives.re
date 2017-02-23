include Helpers;


let assertEqual a b message => assertEquality "AboutPrimitives" a b message;

let meditate () => {
  assertEqual "hello" __string__  "Strings are surrounded by double quotes.";

  assertEqual 'a' __char__ "Characters are surrounded by single quotes.";

  assertEqual 100 __int__ "Integers are whole numbers.";

  assertEqual (-100) __int__ "Integers can be negative.";

  assertEqual 123.45 __float__ "Floats have a decimal.";

  assertEqual (-123.45) __float__ "Floats can be negative, too.";

  let intSum = 13 + 6;

  assertEqual intSum __int__ "Integers are added with \"+\".";

  let floatSum = 13.0 +. 6.0;

  assertEqual floatSum __float__ "Floats use a different addition symbol.";

  let intResult = 9 / 3 * 2;

  assertEqual intResult __int__ "Integers use the normal divide and multiply sybmols.";

  let floatResult = 9.0 /. 3.0 *. 2.0;

  assertEqual floatResult __float__ "Like addition, floats have their own divide and multiply symbols.";

  let sentence = "Reason" ^ " is " ^ "fun.";

  assertEqual sentence __string__ "Strings are concatenated with \"^\".";

  let nums = [4, 5, 6];

  assertEqual nums [__int__] "Lists are comma-separated values of the same type surrounded by brackets.";

  let moreNums = [1, 2, 3, ...nums];

  assertEqual moreNums [__int__] "The spread operator allows appending to lists.";
};
