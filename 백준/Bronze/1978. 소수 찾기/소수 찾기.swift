import Foundation

let n = Int(readLine()!)!
let nums = readLine()!.split(separator: " ").map { Int($0)! }
var isPrimeNumber = [Bool](repeating: true, count: 1_001)

isPrimeNumber[0] = false
isPrimeNumber[1] = false

for i in 2..<Int(sqrt(Double(1000)) + 1) {
    if isPrimeNumber[i] {
        var j = 2
        while i * j <= 1000 {
            isPrimeNumber[i * j] = false
            j += 1
        }
    }
}

var answer = 0

for num in nums {
    if isPrimeNumber[num] { answer += 1 }
}

print(answer)