let input = readLine()!.split(separator: " ").map { Int(String($0))! }
let A = input[0]
let B = input[1]
let C = input[2]

let profit = C - B

if profit <= 0 {
    print(-1)
} else {
    print(A / profit + 1)
}