"use strict";

function factorial(n) {
  var i = 1,
    len = n;
  while (i < len) {
    n *= i;
    i++;
  }
  return n;
}

function main() {
  //   const n = +readLine();

  console.log(factorial(4));
}

main();
