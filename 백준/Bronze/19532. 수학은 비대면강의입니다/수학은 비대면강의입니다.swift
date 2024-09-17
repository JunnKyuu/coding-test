let arr = readLine()!.split(separator: " ").map{Int($0)!}
let a = arr[0], b = arr[1], c = arr[2], d = arr[3], e = arr[4], f = arr[5]

OUTTER: for i in -999...999 {
    for j in -999...999 {
        let result = a*i + b*j
        let result2 = d*i + e*j
        
        if result == c && result2 == f {
            print(i, terminator: " ")
            print(j)
            break OUTTER
        }
    }
}