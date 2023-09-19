const fs = require('fs');
const [ , card, , check ] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
const deck = new Set(card.split(' '));
const targets = check.split(' ');

// 2.
let result = [];
for(const target of targets) {
  deck.has(target) ?
    result.push(1) :
    result.push(0);
};

// 3.
console.log(result.join(' '));