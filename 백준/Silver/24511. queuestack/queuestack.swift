import Foundation

let n = Int(readLine()!)!
let type = readLine()!.split(separator: " ").map { Int($0)! }
let firstElement = readLine()!.split(separator: " ").map { Int($0)! }
let count = Int(readLine()!)!
var input = Array(readLine()!.split(separator: " ").map { Int($0)! }.reversed())

var tempQ = [Int]()
for i in 0..<n {
    if type[i] == 0 {
        tempQ.append(firstElement[i])
    }
}

var answer = [Int]()
for _ in 0..<count {
    answer.append(tempQ.popLast() ?? input.removeLast())
}

print(answer.map({ String($0) }).joined(separator: " "))