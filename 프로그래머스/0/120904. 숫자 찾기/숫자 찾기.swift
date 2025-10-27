import Foundation

func solution(_ num:Int, _ k:Int) -> Int {
    let target = Character(String(k))
    var arr = Array(String(num))
    var index = -1
    
    print("target: \(target)")
    
    for i in arr {
        if i == target {
            print("same")
            index = arr.firstIndex(of: i)! + 1
            break
        }
    }
    print("index: \(index)")
    
    return index
}