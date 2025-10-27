import Foundation

func solution(_ order:Int) -> Int {
    var str_order: String = String(order)
    var answer: Int = 0
    
    for i in str_order {
        if i == "3" || i == "6" || i == "9" {
            answer += 1
        }
    }
    
    return answer
}