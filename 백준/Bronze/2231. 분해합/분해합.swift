let n = Int(readLine()!)!
var sum = 0
var realI = 0

for i in 1...n { 
    sum = i
    for j in String(i) { 
        sum += Int(String(j))!
    }
    if sum == n { 
        realI = i
        break
    }
}
if realI == 0 { 
    print("0")
}else {
    print("\(realI)")
}