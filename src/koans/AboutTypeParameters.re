/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutTypeParameters" a b message;

let meditate () => {
  assertEqual 0  1 "FIXME:  AboutTypeParameters not implemented";
};
