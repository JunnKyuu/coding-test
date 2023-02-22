import Foundation

let num = readLine()!

let numArr = num.components(separatedBy: " ")
let a = Int(numArr[0])!
let b = Int(numArr[1])!

if (a > b) {
    print(">")
} else if (a == b) {
    print("==")
} else {
    print("<")
}