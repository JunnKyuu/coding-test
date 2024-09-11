let material : Int = Int(readLine()!)!
let armor : Int = Int(readLine()!)!
let numArr : Array<Int> = readLine()!.split(separator: " ").map{Int($0)!}

var count : Int = 0

for i in 0..<numArr.count-1 {
    var sum = 0
    for j in i + 1..<numArr.count {
        sum = numArr[i] + numArr[j]
        if(sum == armor) {
            count += 1
        }
    }
}

print(count)