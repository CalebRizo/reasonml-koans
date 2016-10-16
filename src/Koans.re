/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
/*  Asserts */

let assertEquality = fun x y => x === y;

let assertExpectation = fun () => {
  /* Change the _ to a value that will make the assertion true. */
  assertEquality true _;
};

assertExpectation ();
