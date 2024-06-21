import Foundation

var line = Array(readLine()!)
var left: [Character] = []
var answer = [Int](repeating: -1, count: 26)

for i in 0..<line.count {
    let ch = line.removeFirst()
    if left.contains(ch) {
        continue
    }else {
        answer[Int(ch.asciiValue!)-97] = i
    }
    left.append(ch)
}

print(answer.map { "\($0)" }.joined(separator: " "))