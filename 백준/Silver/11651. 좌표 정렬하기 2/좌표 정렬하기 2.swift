let n = Int(readLine()!)!
var coord: [(x: Int, y: Int)] = []

for _ in 0..<n {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    coord.append((input[0], input[1]))
}

coord.sort { $0.y == $1.y ? $0.x < $1.x : $0.y < $1.y }

coord.forEach { print($0.x, $0.y) }