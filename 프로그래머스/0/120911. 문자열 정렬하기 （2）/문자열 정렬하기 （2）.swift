import Foundation

func solution(_ my_string:String) -> String {
    var lowercased = my_string.lowercased()    
    var answer = Array(lowercased)
    answer.sort()
    
    print(String(answer))
    
    return String(answer)
}