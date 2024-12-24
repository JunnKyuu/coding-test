let input = readLine()!.split(separator: " ").map { Int($0)! }

var minimumNumber = input.max()!

while true {
    if minimumNumber % input[0] == 0 && minimumNumber % input[1] == 0 {
        print(minimumNumber)
        break
    } else {
        minimumNumber += input.max()!
    }
}