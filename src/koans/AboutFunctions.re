/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutFunctions" a b message;

type person = {firstName: string, lastName: string};

let meditate () => {
  let addTwo = fun (num) => 2 + num;

  let sum1 = addTwo(2);

  assertEqual sum1 __int__ "Functions are defined by \"fun\".";

  let addThree = fun num => 3 + num;

  let sum2 = addThree(2);

  assertEqual sum2 __int__ "Functions may omit the parentheses around simple, \"one unit\" arguments.";

  let sum3 = addThree 3;

  assertEqual sum3 __int__ "You may omit the parentheses when calling a function for simple, \"one unit\" arguments.";

  /* addTwo 5 is two arguments, so they must be surrounded by parentheses. */
  let sum4 = addThree (addTwo 5);

  assertEqual sum4 __int__ "Group arguments using parentheses to create simple \"one unit\" arguments.";

  let addNums = fun (num1, num2) => num1 + num2;

  let total = addNums (4, 9);

  assertEqual total __int__ "Use a tuple to pass multiple arguments to a function.";

  let gimmeOne = fun () => 1;

  let one = gimmeOne ();

  assertEqual one __int__ "You can pass tuples to functions with 0 arguments.";

  let sayHiToTheWorld () => {
    let firstPart = "Hello";
    let secondPart = " ";
    let thirdPart = "World";

    firstPart ^ secondPart ^ thirdPart
  };

  let worldGreeting = sayHiToTheWorld ();

  assertEqual worldGreeting __string__ "Use a block expression to create temporary bindings in a function.";

  /* See the person definition above. */
  let p = {firstName: "Joe", lastName: "Smith"};

  let joinNames = fun {firstName: fn, lastName: ln} => fn ^ " " ^ ln;

  let fullName = joinNames p;

  assertEqual fullName __string__ "Records can be destructured in function arguments.";

  let rec fac num =>
    if (num <= 1) {
      1
    } else {
      num * fac (num - 1)
    };

  let number = fac 4;

  assertEqual number __int__ "Use the \"rec\" keyword to define a recursive function.";

  let rec isEven num =>
    if (num == 0) {
      true
    } else {
      isOdd (num - 1)
    }
  and isOdd num =>
    if (num == 0) {
      false
    } else {
      isEven (num - 1)
    };

  let isEvenNumber = isEven 4;

  assertEqual isEvenNumber __bool__ "Use the \"rec\" and \"and\" keywords to create mutually recursive functions.";

  let makeAdder = fun number1 => fun number2 => number1 + number2;

  let addTwo = makeAdder 2;

  let twoPlusThree = addTwo 3;

  assertEqual twoPlusThree __int__ "Functions can return other functions.";
};
