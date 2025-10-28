import Foundation

func solution(_ letter:String) -> String {    
    var morse: [String:String] = [
        ".-":"a","-...":"b","-.-.":"c","-..":"d",".":"e","..-.":"f",
        "--.":"g","....":"h","..":"i",".---":"j","-.-":"k",".-..":"l",
        "--":"m","-.":"n","---":"o",".--.":"p","--.-":"q",".-.":"r",
        "...":"s","-":"t","..-":"u","...-":"v",".--":"w","-..-":"x",
        "-.--":"y","--..":"z"
    ]
    
    var answer: String = ""
    var arr = letter.split(separator: " ")
    
    for i in arr {
        var ch = morse[String(i)]!
        answer.append(ch)
    }
    
    return answer
}