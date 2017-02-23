include Helpers;

let assertEqual a b message => assertEquality "AboutTuples" a b message;

type intAndFloat = (int, float);

let meditate () => {
  let pair = (1, 2);

  assertEqual pair __tuple__ "Tuples are comma-separated values of a fixed length.";

  let triplet = (4, 5.0, "6");

  assertEqual triplet ___tuple___ "Unlike lists, tuples can contain different types.";

  let triplet2: (int, float, string) = (10, 20.0, "30");

  assertEqual triplet2 ___tuple___ "Tuples can have type annotations.";

  let zeroValues = ();

  assertEqual zeroValues __unit__ "A tuple with zero values is called \"unit\".";

  /* You cannot define type aliases inside a block, so it is defined above. */
  let iAndF: intAndFloat = (33, 99.0);

  assertEqual iAndF ____tuple____ "Type aliases can be created for tuples.";
};
