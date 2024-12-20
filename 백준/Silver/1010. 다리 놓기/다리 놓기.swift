var cache = [[Int]](repeating: [Int](repeating: 0, count: 31), count: 31)

func f(n: Int, r: Int) -> Int {
    if cache[n][r] != 0 {
        return cache[n][r]
    }

    if n == r || r == 0 {
        return 1
    }

    cache[n][r] = f(n: n - 1, r: r) + f(n: n - 1, r: r - 1)

    return cache[n][r]
}


func solution() {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let r = input[0], n = input[1]
    print(f(n: n, r: r))
}

let t = Int(readLine()!)!
for _ in 0..<t { solution() }