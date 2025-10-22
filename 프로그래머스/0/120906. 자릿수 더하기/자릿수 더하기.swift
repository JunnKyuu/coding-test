import Foundation

func solution(_ n:Int) -> Int {
    var number = String(n)
    var answer = 0
    
    for i in number { 
        answer += Int(String(i))!
    }
    
    return answer
}