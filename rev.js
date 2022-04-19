var reverseWords = function (s) {
  let str = s.split(" ").reverse().join(" ").toString();
  console.log(str);
};
reverseWords("  hello world  ");
