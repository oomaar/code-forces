function helpfulMaths(str) {
  const splitStr = str.split("");
  const splitStrWithoutPlus = splitStr.filter((item) => item !== "+");
  const sortedSplitStr = splitStrWithoutPlus.sort();
  const output = sortedSplitStr.join("+");

  return output;
}

console.log(helpfulMaths("1+5+4+8+2+5"));
