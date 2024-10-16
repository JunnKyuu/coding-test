func factorial(num : Int) -> Int {
    if num == 0 {
        return 1
    }
    else {
        return num * factorial(num: num-1)
    }
}

let n = Int(readLine()!)!

let num = factorial(num: n)

print(num)