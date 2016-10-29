/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutDestructuring" a b message;

let meditate () => {
  assertEqual 10 0  "FIXME:  AboutDestructuring has not been implemented.";
};
