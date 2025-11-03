import Foundation

func solution(_ s:String) -> Int {
    var answer:Int = 0
    var arr = s.split(separator: " ")
    
    for i in 0..<arr.count {
        if arr[i] != "Z" {
            answer += Int(arr[i])!
        } else {
            answer -= Int(arr[i-1])!
        }
    }
        
    return answer
}