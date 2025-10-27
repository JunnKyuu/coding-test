import Foundation

func solution(_ my_string:String, _ num1:Int, _ num2:Int) -> String {
    var answer = Array(my_string)
    
    var temp = answer
    answer[num1] = answer[num2]
    answer[num2] = temp[num1]
    
    return String(answer)
}