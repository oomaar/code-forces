const bitPlusPlusString = (string) => string;
function bitPlusPlus(number, string) {
  let result = 0;

  for (let i = 0; i < number; i++) {
    let stringValue = bitPlusPlusString(string);
    if (stringValue === "X++" || stringValue === "++X") {
      result++;
    } else {
      result--;
    }
  }

  return result;
}

console.log(bitPlusPlus(2, "--X"));
