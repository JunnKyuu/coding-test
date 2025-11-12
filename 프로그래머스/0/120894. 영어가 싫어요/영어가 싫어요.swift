import Foundation

func solution(_ numbers:String) -> Int {
    var str = numbers
    var num_dic = [
        "zero": "0", "one": "1", "two": "2", "three": "3", "four": "4",
        "five": "5", "six": "6", "seven": "7", "eight": "8", "nine": "9"
    ]
    
    for (word, digit) in num_dic {
        str = str.replacingOccurrences(of: word, with: digit)
    }
    
    return Int(str)!
}