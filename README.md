# Reason Koans

## Reason via `yarn`

Example project using Reason as an `yarn` dependency.

(For instructions with npm, see [Reason via npm](https://github.com/reasonml/ExampleProject/blob/master/README-NPM.md))

### Install yarn:

[yarn](https://yarnpkg.com/) is a fast, reliable, and secure dependency management tool. You can now use yarn to install reason and manage its dependencies.

```
npm install -g yarnpkg
```

### Get started: 
```sh
git clone https://github.com/reasonml/ExampleProject.git
cd ExampleProject
yarn cache clean # need to clean every time before installation, see https://github.com/yarnpkg/yarn/issues/480
yarn install
yarn reasonbuild
yarn start
```
