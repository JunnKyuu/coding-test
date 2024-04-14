let input = readLine()!
let numbers = input.split(separator: " ")
let A = Int(numbers[0])!
let B = Int(numbers[1])!
let C = Int(numbers[2])!

print((A+B)%C)
print(((A%C) + (B%C))%C)
print((A*B)%C)
print(((A%C) * (B%C))%C)