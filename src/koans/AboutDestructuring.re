include Helpers;

let assertEqual a b message => assertEquality "AboutDestructuring" a b message;

type movie = {title: string, year: int};

let meditate () => {
  let ages = (1, 13);

  let (toddler, teenager) = ages;

  assertEqual toddler __int__ "Desctructuring allows you to bind names to values inside tuples.";

  assertEqual teenager __int__ "The \"shape\" of the tuple (parentheses) surrounds the new bindings.";

  /* See the movie record definition above. */
  let classic = {title: "Back to the Future", year: 1985};

  let {title: t, year: y} = classic;

  assertEqual t __string__ "You can destructure records, too.";

  assertEqual y __int__ "Use the record shape to desctructure record fields to names.";

  let (tyke: int, adolescent: int) = ages;

  assertEqual tyke __int__ "You can type annotate destructuring.";

  let comedy = {title: "Raising Arizona", year: 1987};

  let {title: (t2:string), year: (y2:int)} = comedy;

  assertEqual t2 __string__ "Record type annotations are surrounded by parentheses.";
};
