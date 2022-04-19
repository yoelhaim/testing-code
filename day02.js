function vowelsAndConsonants(s) {
  var i = 0,
    len = s.length,
    str = s.split(""),
    str2 = s.split(""),
    vowel = ["a", "e", "i", "o"];

  for (i; i < str2.length; i++) {
    if (
      str2[i] == vowel[0] ||
      str2[i] == vowel[1] ||
      str2[i] == vowel[2] ||
      str2[i] == vowel[3]
    ) {
      console.log(str2[i]);
      str = str.filter((item) => item !== str2[i]);
      //   str.splice(i, 1);
    }
  }
  console.log(`${str.join("\n")}`);
}

function main() {
  const s = readLine();

  vowelsAndConsonants("hello");
}
vowelsAndConsonants("javascriptloops");
