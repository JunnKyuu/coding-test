import Foundation

func solution(_ before:String, _ after:String) -> Int {
    var b_freq: [Character:Int] = [:]
    var a_freq: [Character:Int] = [:]
    var is_same: Int = 1
    
    for ch in before {
        b_freq[ch, default: 0] += 1
    }
    
    for ch in after {
        a_freq[ch, default:0] += 1
    }
    
    for ch in before {
        if b_freq[ch] != a_freq[ch] {
            is_same = 0
        }
    }
    
    return is_same
}