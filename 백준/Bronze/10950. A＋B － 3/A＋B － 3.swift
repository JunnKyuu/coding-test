let number = Int(readLine()!)!
var count = 0

while count < number {
    let input = readLine()!
    let inputArr = input.split(separator: " ")
    let numA = Int(inputArr[0])!
    let numB = Int(inputArr[1])!
    
    print(numA + numB)
    count += 1
}