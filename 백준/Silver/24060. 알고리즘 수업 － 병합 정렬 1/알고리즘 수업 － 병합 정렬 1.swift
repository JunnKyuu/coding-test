let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var array = readLine()!.split(separator: " ").map { Int($0)! }
var tmp = [Int](repeating: -1, count: n)
var count = 0
var answer = -1

func mergeSort(_ array: inout [Int], p: Int, r: Int) {
    if p < r {
        let q = (p + r) / 2
        mergeSort(&array, p: p, r: q)
        mergeSort(&array, p: q + 1, r: r)
        merge(&array, p: p, q: q, r: r)
    }
}

func merge(_ array: inout [Int], p: Int, q: Int, r: Int) {
    var i = p, j = q + 1, t = 0
    
    while i <= q && j <= r {
        if array[i] <= array[j] {
            tmp[t] = array[i]
            t += 1
            i += 1
        } else {
            tmp[t] = array[j]
            t += 1
            j += 1
        }
    }
    
    while i <= q {
        tmp[t] = array[i]
        t += 1
        i += 1
    }
    
    while j <= r {
        tmp[t] = array[j]
        t += 1
        j += 1
    }
    
    i = p
    t = 0
    
    while i <= r {
        count += 1
        if count == k {
            answer = tmp[t]
            break
        }
        array[i] = tmp[t]
        i += 1
        t += 1
    }
}

mergeSort(&array, p: 0, r: array.count - 1)
print(answer)