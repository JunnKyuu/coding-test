var sugar = Int(String(readLine()!))!
var bag = 0

while sugar >= 3 {
    if sugar % 5 == 0 {
        bag += 1
        sugar -= 5
    } else {
        sugar -= 3
        bag += 1
    }
}

if sugar == 0 {
    print(bag)
} else {
    print(-1)
}