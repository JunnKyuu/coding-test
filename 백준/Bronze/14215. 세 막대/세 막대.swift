let numbers: [Int] = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
let sum = numbers.reduce(0) {$0 + $1}

if numbers[0] + numbers[1] > numbers[2] {
    print(sum)
} else {
    print((numbers[0] + numbers[1]) * 2 - 1)
}