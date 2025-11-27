function solution(M, N) {
    var answer = 0;
    var m = M
    var n = N
    var a = 0
    var b = 0
    
    while(m != 1) {
        m -= 1
        a += 1
    }
    
    while(n != 1) {
        n -= 1
        b += 1
    }
    
    answer = M * b + a
    
    return answer;
}