import Foundation

func solution(_ box:[Int], _ n:Int) -> Int {
    let x = box[0]
    let y = box[1]
    let z = box[2]
    
    var answer = (x / n) * (y / n) * (z / n)
    
    return answer
}