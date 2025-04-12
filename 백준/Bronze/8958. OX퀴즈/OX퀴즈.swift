func solution() {
    let string = readLine()!
    var step = 1
    var answer = 0
    
    for str in string {
        if str == "O" {
            answer += step
            step += 1
        } else {
            step = 1
        }
    }
    print(answer)
}

let t = Int(readLine()!)!
(1...t).forEach { _ in solution() }