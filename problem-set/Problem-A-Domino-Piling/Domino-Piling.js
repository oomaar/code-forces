function dominoPiling(length, width) {
  let numberOfDuminos = length * width;
  let result = numberOfDuminos / 2;

  if (result % 2 !== 0) {
    return result.toString().slice(0, 1);
  } else {
    return result;
  }
}

console.log(dominoPiling(2, 4));
