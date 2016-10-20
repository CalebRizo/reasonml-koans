/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
include Helpers;

let assertEqual = assertEquality "AboutAsserts";

/******

  Welcome to Reason Koans!

  If you haven't already, cd to the root of this project, then run 
  "npm run koans".  You should be presented with the following message:
  
      src/koans/AboutAsserts.re: true should be true.

  This message is telling you that there is a problem in this source file.

  Find the "true should be true" message below.  It should be 
  next to an assertion that is checking the equality of two values.  Modify 
  the code so that the assertion passes and save the file.  Once you have done 
  this, run the koans again and you will be presented with a different message
  pointing to another source file containing an assertion error.

  Continue fixing the code until you have reached enlightenment.

*******/

let meditate => {
  let x = __bool__;  /* Change __bool__ to the correct value. */

  assertEqual true x "true should be true.";
};
