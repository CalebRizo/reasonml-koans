/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutVariants" a b message;

let meditate () => {
  assertEqual true __bool__ "FIXME:  AboutVariants is not yet implemented.";
};
