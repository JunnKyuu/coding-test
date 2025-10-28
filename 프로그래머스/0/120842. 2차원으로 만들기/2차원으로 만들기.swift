import Foundation

func solution(_ num_list:[Int], _ n:Int) -> [[Int]] {
    var answer: [[Int]] = []
    var temp: [Int] = []
    
    for i in num_list {
        temp.append(i)
        
        if temp.count == n {
            answer.append(temp)
            temp.removeAll()
        }
    }
    
    return answer
}