/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

include Helpers;

let assertEqual a b message => assertEquality "AboutRecords" a b message;


let meditate () => {
  assertEqual true __bool__ "FIXME:  AboutRecords has not been implemented yet.";
};
