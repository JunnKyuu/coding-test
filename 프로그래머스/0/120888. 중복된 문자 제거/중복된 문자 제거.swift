import Foundation

func solution(_ my_string:String) -> String {
    var seen: Set<Character> = []
    var answer: String = ""
    
    for i in my_string {
        if !seen.contains(i) {
            seen.insert(i)
            answer.append(i)
        }
    }
    
    return answer
}