import Foundation

var num = Int(readLine()!)!
var count = 1

for i in 0..<num {
    count = count * 2
}

print((count + 1) * (count + 1))