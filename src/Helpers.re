
/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
let __string__ = "";
let __number__ = 0;

let assertEquality expected actual message => {
	if (expected != actual) {
		print_string message;
		exit 0;
	}
};
