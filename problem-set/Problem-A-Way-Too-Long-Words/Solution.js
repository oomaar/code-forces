function reduceLongWords(string) {
  if (string.length < 10) {
    return string;
  } else {
    const firstChar = string.slice(0, 1);
    const lastChar = string.slice(string.length - 1, string.length);

    return `${firstChar}${string.length - 2}${lastChar}`;
  }
}

console.log(reduceLongWords("pneumonoultramicroscopicsilicovolcanoconiosis"));
