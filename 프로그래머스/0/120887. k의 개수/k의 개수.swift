import Foundation

func solution(_ i:Int, _ j:Int, _ k:Int) -> Int {
    var answer = 0
    
    for num in i...j {
        var str_num = String(num)
        var ch_k = Character(String(k))
        
        for t in str_num {
            if t == ch_k {
                answer += 1
            }
        }
    }
    
    return answer
}