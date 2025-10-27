import Foundation

func solution(_ age:Int) -> String {
    var answer = ""

    var str_age = String(age)
    var age_arr = Array(str_age)
    var int_arr: [Int] = []
    var alp = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"]
    
    for i in age_arr {
        int_arr.append(Int(String(i))!)
    }
    
    for i in int_arr {
        answer = answer + alp[i]
    }
    
    return answer
}