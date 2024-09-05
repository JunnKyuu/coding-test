let n = readLine()!
var arr: [Int] = []

for i in n {
    arr.append(Int(String(i))!)
}
arr.sort(by: >)

for k in 0..<arr.count {
    print("\(arr[k])", terminator: "")
}