/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

let pathToEnlightenment = [
  AboutAsserts.meditate,
  AboutPrimitives.meditate,
  AboutLet.meditate,
  AboutTypes.meditate,
  AboutTuples.meditate,
  AboutRecords.meditate
];

List.iter (fun f => f ()) pathToEnlightenment;

print_string "Congratulations:  you have obtained enlightenment.\n";
