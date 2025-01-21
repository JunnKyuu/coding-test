let input = readLine()!.split(separator: " ").map { Int($0)! }
let x = input[1]
let array = readLine()!.split(separator: " ").map { Int($0)! }.filter { $0 < x }
array.forEach { print($0, terminator: " ") }