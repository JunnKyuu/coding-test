import Foundation

func solution(_ array:[Int]) -> Int {
    var answer: Int = 0
    var my_string: String = ""
    
    for i in array {
        my_string.append(String(i))
    }
    
    for i in my_string {
        if i == "7" {
            answer += 1
        }
    }
    
    return answer
}