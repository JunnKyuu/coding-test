let num : Int = Int(readLine()!)!
var count : Int = 1
var i : Int = 1

while(true) {
    let sum = i * (i + 1) / 2
    
    if(num - sum <= 0) {
        break
    } else if((num - sum) % (i + 1) == 0) {
        count += 1
    }
    
    i += 1
}

print(count)