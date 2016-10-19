/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
include Helpers;

let assertEqual = assertEquality "AboutAsserts";

/******

  Welcome to Reason Koans!

  To get started, run "npm run koans" in the root of this project.  You
  should be presented with the name of a file and an error message.  Open the
  file and find the error message.

  Each file contains assertions with words surrounded by underscores.  Replace
  these underscored words with values that will make the assertion pass, then 
  run "npm run koans" to find the next error.

  Each correction will move you closer to enlightenment.

*******/

let meditate => {
  assertEqual true __bool__ "true should be true.";
};
