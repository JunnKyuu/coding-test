var num: Set<Int> = []

for _ in 1...10 {
    num.insert(Int(readLine()!)! % 42)
}

print(num.count)