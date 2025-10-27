import Foundation

func solution(_ n:Int) -> [Int] {
    var answer:[Int] = []
    var value = Int(sqrt(Double(n)))
    print(value)
        
    for i in 1..<value+1 {
        var j = n / i
        if i * j == n {
            if i == j {
                answer.append(i)
            } else {
                answer.append(i)
                answer.append(j)
            }
        }
    }
    
    answer.sort()
    
    return answer
}