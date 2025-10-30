import Foundation

func solution(_ emergency:[Int]) -> [Int] {
    var answer:[Int] = []
    var em = emergency
    em.sort()
    em.reverse()
    
    for i in emergency {
        answer.append(em.firstIndex(of: i)! + 1)
    }
    
    print(answer)
    
    
    return answer
}