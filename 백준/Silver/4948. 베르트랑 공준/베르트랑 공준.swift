import Foundation

var isPrimeNumber = [Bool](repeating: true, count: 246_913)

isPrimeNumber[0] = false
isPrimeNumber[1] = false

for i in 2..<Int(sqrt(Double(246_912)) + 1) {
    if isPrimeNumber[i] {
        var j = 2
        while i * j <= 246_912 {
            isPrimeNumber[i * j] = false
            j += 1
        }
    }
}

while let input = readLine(), let n = Int(input), n != 0 {
    print(isPrimeNumber[n + 1...n * 2].filter { $0 }.count)
}