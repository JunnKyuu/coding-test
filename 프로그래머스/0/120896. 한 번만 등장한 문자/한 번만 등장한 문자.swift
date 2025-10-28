import Foundation

func solution(_ s:String) -> String {
    var dic:[Character:Int] = [:]
    var answer: String = ""
    
    for ch in s {
        dic[ch, default:0] += 1
    }
    
    for (key, value) in dic {
        if value == 1 {
            answer.append(key)
        }
    }
    var arr = Array(answer)
    arr.sort()
    
    answer.removeAll()
    answer = String(arr)
    
    print(answer)
    
    return answer
}