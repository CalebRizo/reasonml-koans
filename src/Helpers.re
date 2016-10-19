
/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
let __string__ = "";
let __number__ = 0;
let __bool__ = false;

let assertEquality path expected actual message => {
	if (expected != actual) {
		print_string ("src/koans/" ^ path ^ ".re: " ^ message ^ "\n");
		exit 0;
	}	
}
