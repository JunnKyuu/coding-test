const fs = require("fs");
const file = process.platform === "linux" ? "dev/stdin" : "./text.txt";
const input = fs.readFileSync(file).toString().trim().split("\n");

const t = input[0];

for (i = 1; i <= t; i++) {
  let str = input[i].trim();
  let End = str.length - 1;
  console.log(
    input[i].substring(0, 1) + input[i].substring(End, input[i].length)
  );
}