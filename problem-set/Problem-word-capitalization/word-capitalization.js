function capitalizeFirstLetterInAString(str) {
  const firstLetter = str.slice(0, 1);
  const output = `${firstLetter.toUpperCase()}${str.slice(1, str.length)}`;

  return output;
}

console.log(capitalizeFirstLetterInAString("test"));
