var set = Set<String>()

let N = Int(readLine()!)!

for _ in 0..<N {
    let input = readLine()!.split(separator: " ").map { String($0) }
    if input[1] == "enter" { // enter면 insert
        set.insert(input[0]) //👉 O(1)
    } else { // leave면 remove
        set.remove(input[0]) //👉 O(1)
    }
}

set.sorted(by: >).forEach { name in
    print(name)
}