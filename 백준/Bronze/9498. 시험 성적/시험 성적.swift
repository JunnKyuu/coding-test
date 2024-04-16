let input = readLine()!
let stringArr = input.split(separator: " ")
let score = Int(stringArr[0])!

if(score >= 90) {
    print("A")
}

if(score >= 80 && score < 90) {
    print("B")
}

if(score >= 70 && score < 80) {
    print("C")
}

if(score >= 60 && score < 70) {
    print("D")
}

if(score < 60) {
    print("F")
}