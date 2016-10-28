/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

let __string__ = "";

let __int__ = 0;

let __float__ = 0.0;

let __bool__ = false;

let ___bool___ = true;

let __char__ = 'a';

let __tuple__ = (0, 0);

let ___tuple___ = ((0 : int), (0.0 : float), ("0" : string));

let ____tuple____ = (0, 0.0);

let __unit__ = ();

let assertEquality path expected actual message =>
  if (expected != actual) {
    print_string ("src/koans/" ^ path ^ ".re: " ^ message ^ "\n");
    exit 0
  };
