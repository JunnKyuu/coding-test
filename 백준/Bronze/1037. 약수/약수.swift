private func solution() -> Int {
    let N = Int(readLine()!)!
    let div = readLine()!.split(separator: " ").map{ Int(String($0))! }.sorted(by: <)
    return div[0] * div[N-1]
}

print(solution())