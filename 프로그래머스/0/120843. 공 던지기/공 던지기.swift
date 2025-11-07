import Foundation

func solution(_ numbers:[Int], _ k:Int) -> Int {
    var index: Int = 2 * (k - 1) % numbers.count
    var answer: Int = numbers[index]
    
    return answer
}