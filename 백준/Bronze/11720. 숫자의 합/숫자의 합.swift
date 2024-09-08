let count = Int(readLine()!)!
let inputArr = readLine()! 
let numArr = inputArr.map{Int(String($0))!}

let sum = numArr.reduce(0, +)
print(sum)