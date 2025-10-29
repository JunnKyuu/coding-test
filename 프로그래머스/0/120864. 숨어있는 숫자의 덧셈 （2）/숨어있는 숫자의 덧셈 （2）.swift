import Foundation

func solution(_ my_string:String) -> Int {
    var temp: String = ""
    var answer: Int = 0
    
    for ch in my_string {
        if ch.isNumber {
            temp.append(ch)
            print(temp)
        } else {
            if !temp.isEmpty {
                answer += Int(temp)!
                temp = ""
            }
        }
    }
    
    if !temp.isEmpty {
        answer += Int(temp)!
    }
    
    print(answer)
    
    return answer
}