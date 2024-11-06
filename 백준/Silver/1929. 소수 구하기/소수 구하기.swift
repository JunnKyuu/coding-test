import Foundation

func isPrimeNumber(n: Int) -> Bool {
    if n == 1 {
        return false
    }
    for i in 2..<Int(sqrt(Double(n)) + 1) {
        if n % i == 0 {
            return false
        }
    }
    return true
}

let input = readLine()!.split(separator: " ").map { Int($0)! }
let m = input[0]
let n = input[1]

for i in m...n {
    if isPrimeNumber(n: i) {
        print(i)
    }
}