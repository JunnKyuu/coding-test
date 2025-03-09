var coords: [(Int, Int)] = []

for _ in 0..<3 {
    let coord = readLine()!.split(separator: " ").map { Int($0)! }
    coords.append((coord[0], coord[1]))
}

let x = Dictionary(coords.map { ($0.0, 1) }, uniquingKeysWith: +)
let y = Dictionary(coords.map { ($0.1, 1) }, uniquingKeysWith: +)

print(x.first { $0.value == 1 }!.key, y.first { $0.value == 1 }!.key)