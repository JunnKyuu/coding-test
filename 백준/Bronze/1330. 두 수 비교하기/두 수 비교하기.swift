let input = readLine()!
let stringArr = input.split(separator: " ")

let a = Int(stringArr[0])!
let b = Int(stringArr[1])!

if(a > b) { print(">") }
if(a < b) { print("<") }
if(a == b) { print("==") }
