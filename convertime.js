"use strict";

const fs = require("fs");

function timeConversion(s) {
  let str = s.split(""),
    s2 = s,
    check = [],
    h = [
      "13",
      "14",
      "15",
      "16",
      "17",
      "18",
      "19",
      "20",
      "21",
      "22",
      "23",
      "24",
      "00",
      "01",
      "02",
      "03",
      "04",
      "05",
      "06",
      "07",
      "08",
      "09",
      "10",
      "11",
      "12",
    ],
    i = 0;
  while (i < 2) {
    check[i] = str[i];

    i++;
  }
  str.splice(0, 2);
  let len = str.length;
  str.splice(len - 1, 1);
  str.splice(len - 2, 1);
  var pm_h = parseInt(check.join("")) - 1;
  //   console.log(h[pm_h]);
  str.unshift(h[pm_h]);
  console.log(str.join(""));
}

function main() {
  //   const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  // const s = readLine();

  const result = timeConversion("07:05:45PM");

  //   ws.write(result + "\n");

  //   ws.end();
}
main();
