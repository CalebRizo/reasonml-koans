/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutLoopsAndTests" a b message;

let meditate () => {
  let posOrNeg = fun num => {
    if (num < 0) {
      "negative";
    } else {
      "positive";
    }
  };

  let result = posOrNeg 5;

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
};
