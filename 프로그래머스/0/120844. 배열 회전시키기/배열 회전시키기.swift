import Foundation

func solution(_ numbers:[Int], _ direction:String) -> [Int] {
    var answer = numbers
    var last = answer[answer.count-1]
    var first = answer[0]
    
    if direction == "right" {
//         right면 append() -> popLast()
        answer.popLast()
        answer.insert(last, at:0)
        
        
    } else {
        answer.remove(at: 0)
        answer.append(first)
    }
    
    print(answer)
    
    return answer
}