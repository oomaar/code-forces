function comapreTwoStrings(str1, str2) {
  let num1 = 0;
  let num2 = 0;

  for (x = 0; x < str1.length; x++) {
    num1 = str1[x].toLowerCase();
    num2 = str2[x].toLowerCase();

    if (num1 < num2) {
      return -1;
    } else if (num1 > num2) {
      return 1;
    } else {
      return 0;
    }
  }
}

console.log(comapreTwoStrings("aaaa", "aaaf"));
