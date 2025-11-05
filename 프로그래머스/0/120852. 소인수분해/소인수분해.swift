import Foundation

func solution(_ n:Int) -> [Int] {
    var answer: [Int] = []
    var num: Int = n
    
    guard n > 1 else { return [] }
    
    let root: Int = Int(Double(num).squareRoot())
    
    for i in 2...max(2, root+1) {
        while num % i == 0 {
            if !answer.contains(i) {
                answer.append(i)
            }
            
            num /= i
        }
    }
    
    if num > 1 {
        answer.append(num)
    }
    
    print(answer)
    
    return answer
}