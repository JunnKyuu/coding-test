import Foundation

func solution(_ my_string:String) -> Int {
    var arr = my_string.split(separator: " ")
    var answer: Int = Int(arr[0])!
    
    for i in 0..<arr.count {
        if arr[i] == "+" {
            answer += Int(arr[i+1])!
        }
        
        if arr[i] == "-" {
            answer -= Int(arr[i+1])!
        }
    }
    
    return answer
}