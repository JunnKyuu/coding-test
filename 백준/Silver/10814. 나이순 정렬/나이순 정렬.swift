let n = Int(readLine()!)!
var user: [(age: Int, id: String)] = []

for _ in 0..<n {
    let input = readLine()!.split(separator: " ")
    let age = Int(input[0])!, id = String(input[1])
    user.append((age, id))
}

user.sort { $0.age < $1.age }
user.forEach { print($0.age, $0.id) }