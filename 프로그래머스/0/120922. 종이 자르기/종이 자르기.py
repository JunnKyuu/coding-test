def solution(M, N):
    answer = 0
    m = M
    n = N
    a = 0
    b = 0
    
    while(m != 1):
        m -= 1
        a += 1
    print("a", a)
    
    while(n != 1):
        n -= 1
        b += 1
    
    print("b", b)
    print(M)
    
    answer = b * M + a
        
    return answer