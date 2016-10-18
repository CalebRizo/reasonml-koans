/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
let pathToEnlightenment = [
	One.meditate,
	Two.meditate
];

List.iter (fun f => f()) pathToEnlightenment;

print_string "You have obtained enlightenment.";
