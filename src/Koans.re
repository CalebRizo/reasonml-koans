/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
/*  Asserts */

let __string__ = "";

let assertEquality x y message => {
	if (x != y) {
		print_string message;
		exit 0; 
	}
};

assertEquality "one" __string__ "Strings should be equal.\n";

print_string "You have obtained enlightenment.\n"

