/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutFunctions" a b message;

let meditate () => {
  assertEqual false ___bool___ "FIXME: AboutFunctions is not yet implemented.";
};
