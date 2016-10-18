/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
let pathToEnlightenment = [
	AboutAsserts.meditate,
	AboutLet.meditate
];

List.iter (fun f => f()) pathToEnlightenment;

print_string "Congratulations:  you have obtained enlightenment.\n";
