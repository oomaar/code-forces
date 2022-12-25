function getUpperCaseChars(word) {
  const upperCaseChars = word.match(/[A-Z]/g)?.join("");

  return upperCaseChars;
}

function getLowerCaseChars(word) {
  const lowerCaseChars = word.match(/[a-z]/g)?.join("");

  return lowerCaseChars;
}

function resolveWord(word) {
  const upperCaseChars = getUpperCaseChars(word);
  const lowerCaseChars = getLowerCaseChars(word);

  if (upperCaseChars.length > lowerCaseChars.length) {
    return word.toUpperCase();
  } else {
    return word.toLowerCase();
  }
}

console.log(resolveWord("HOUsE"));
