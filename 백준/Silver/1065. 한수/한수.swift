import Foundation

let N = Int(readLine()!)!
var count = 99

if N<100{
    print(N)
}
else if N==1000{
    print(144)
}
else{
    for i in 100...N{
        let n1 = (i%1000)/100
        let n2 = (i%100)/10
        let n3 = (i%10)/1
        
        if (n2-n1) == (n3-n2){
            count += 1
        }
    }
    print(count)