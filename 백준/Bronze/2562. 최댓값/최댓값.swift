var array: [Int] = []

for _ in 1...9 {
    array.append(Int(readLine()!)!)
}

let maxValue = array.max()!
print(maxValue)
print(array.firstIndex(of: maxValue)! + 1)