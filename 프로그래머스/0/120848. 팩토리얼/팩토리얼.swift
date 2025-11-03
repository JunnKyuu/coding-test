import Foundation

func solution(_ n:Int) -> Int {
    var answer: Int = 1
    
    while factorial(answer) < n {
        answer += 1
    }
    
    if factorial(answer) > n {
        answer -= 1
    }
    
    return answer
}

func factorial(_ n: Int) -> Int {
    var value: Int = 1
    
    for i in 1...n {
        value = value * i
    }
    
    return value
}