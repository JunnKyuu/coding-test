import Foundation

func solution(_ my_str:String, _ n:Int) -> [String] {
    var answer: [String] = []
    var temp: String = ""

    for i in my_str {
        temp.append(i)
        
        if temp.count == n {
            answer.append(temp)
            temp = ""
        }
    }
    
    if temp.count != 0 && temp.count < n {
        answer.append(temp)
    }
    
    return answer
}