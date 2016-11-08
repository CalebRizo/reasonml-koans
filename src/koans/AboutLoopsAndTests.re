/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

type resultHolder = {mutable result: int};

let assertEqual a b message => assertEquality "AboutLoopsAndTests" a b message;

let meditate () => {
  let negativeOrNotNegative = fun num => {
    if (num < 0) {
      "negative";
    } else {
      "notnegative";
    }
  };

  let result = negativeOrNotNegative 5;

  assertEqual result __string__ "Use an if statement to test values.";

  let rating = fun num => {
    if (num == 1) {
      "Poor";
    } else if (num == 2) {
      "Okay";
    } else if (num == 3) {
      "Great";
    } else {
      "Invalid";
    }
  };

  let result = rating 2;

  assertEqual result __string__ "Use else if blocks to test alternate cases.";

  let result = rating 5;

  assertEqual result __string__ "Use else blocks to provide a default value.";

  let positive num => (num > 0) ? true : false;

  let result = positive 2;

  assertEqual result __bool__ "Ternary statements can check simple test cases.";

  let holder = {result: 1};

  for i in 1 to 3 {
    holder.result = holder.result * 2;
  };

  assertEqual holder.result __int__ "For loops can count up.";

  holder.result = 1;

  for i in 5 downto 1 {
    holder.result = holder.result * 3;
  };

  assertEqual holder.result __int__ "For loops can also count down.";
};
