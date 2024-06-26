let input = readLine()!.split(separator: " ")
var c = Int(String(input[0].reversed()))!
var d = Int(String(input[1].reversed()))!

if c > d {
    print(c)
}else{
    print(d)
}