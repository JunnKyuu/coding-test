import Foundation

func solution(_ numbers:[Int]) -> [Int] {
    var answer: [Int] = []
    
    for i in 0..<numbers.count {
        answer.append(numbers[i] * 2)
    }
    
    return answer
}