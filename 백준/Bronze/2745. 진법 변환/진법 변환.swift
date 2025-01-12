func pow(_ base: Int, _ n: Int) -> Int {
    var answer = 1
    for _ in 0..<n {
        answer *= base
    }
    return answer
}

func convertCharToInt(_ c: Character) -> Int {
    if c.isNumber {
        return Int(String(c))!
    }
    return Int(c.asciiValue!) - 65 + 10
}

let input = readLine()!.split { $0 == " " }.map { String($0) }
let n = input[0], b = Int(input[1])!
var answer = 0

for (index, n) in (n.reversed()).enumerated() {
    answer += pow(b, index) * convertCharToInt(n)
}
print(answer)