function binary(decimal) {
  let i = 4,
    s = [];
  while (i >= 0) {
    s.push((decimal >> i) & 1);
    i--;
  }
  while (s[i] == "0") {
    s.splice(i, 1);
    i++;
  }

  return s.join("");
}
console.log(binary(5));
