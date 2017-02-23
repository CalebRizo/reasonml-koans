include Helpers;

let assertEqual = assertEquality "AboutLet";

let meditate () => {
  let animal = "dog";

  assertEqual animal __string__ "The \"let\" keyword binds names to values.";

  let animal = "cat";

  assertEqual animal __string__ "You can create a new binding of the same name to refer to another value.";

  {
    assertEqual animal __string__ "Blocks can see previous bindings.";

    let animal = "hamster";

    assertEqual animal __string__ "Blocks have their own scope.";
  };

  assertEqual animal __string__ "You cannot see changes made to bindings outside of a block.";
};
