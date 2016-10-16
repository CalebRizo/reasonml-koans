/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
/*  Asserts */

let assertEquality x y => x === y;

let assertExpectation => {
  /* Change the _ to a value that will make the assertion true. */
  assertEquality true _;
};

assertExpectation ();
