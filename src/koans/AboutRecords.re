include Helpers;

let assertEqual a b message => assertEquality "AboutRecords" a b message;

type pet = {name: string, age: int};

type workout = {
  exercise: string,
  mutable sets: int,
  mutable reps: int
};

let meditate () => {
  /* You cannot define records inside a block, so the record types are defined above. */
  let dog = {name: "Fido", age: 5};

  assertEqual dog {name: __string__, age: __int__} "Records are sets of named values.";

  assertEqual dog.name __string__ "Record fields can be accessed with the dot operator.";

  let anotherDog = { ...dog, name: "Spot" };

  assertEqual anotherDog.age __int__ "New records can be created from old records using the spread operator.";

  let myWorkOut = {exercise: "sit-ups", sets: 3, reps: 20};

  myWorkOut.sets = 4;
  myWorkOut.reps = 25;

  assertEqual myWorkOut {exercise: __string__, sets: __int__, reps: __int__} "Records with fields marked \"mutable\" may be modified.";
};
