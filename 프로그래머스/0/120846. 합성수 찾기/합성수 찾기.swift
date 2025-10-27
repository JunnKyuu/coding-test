import Foundation

func isComposite(_ n: Int) -> Bool {
    if n <= 1 { return false }
    var count = 0
    var arr:[Int] = []
    let sqr = Int(sqrt(Double(n)))

    for i in 1...sqr {
        var j = n / i
        if n % i == 0 {
            if i == j {
                count += 1
            } else {
                count += 2
            }
        } 
    }
    
    return count >= 3
}
func solution(_ n:Int) -> Int {
    var answer = 0
    
    for i in 1...n {
        if isComposite(i) {
            answer += 1
        }
    }
    
    return answer
}