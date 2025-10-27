import Foundation

func solution(_ array:[Int]) -> [Int] {
    var answer:[Int] = []
    var value = array
    value.sort()
    
    var max = value[value.count-1]
    var index = array.firstIndex(of:max)!
    
    answer.append(max)
    answer.append(index)

    
    return answer
}