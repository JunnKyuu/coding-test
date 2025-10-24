import Foundation

func solution(_ rsp:String) -> String {
    var answer: String = ""
    
    for i in rsp {
        if i == "2" {
            answer.append("0") 
        } else if i == "0" {
            answer.append("5") 
        } else {
            answer.append("2") 
        }
    }

    print(answer)
    
    return answer
}