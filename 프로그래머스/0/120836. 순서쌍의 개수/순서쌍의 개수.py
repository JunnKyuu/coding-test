import math

def solution(n):
    answer = 0
    root = math.isqrt(n)
    
    for i in range(1, root + 1):
        if n % i == 0:
            j = n // i
            if i == j:
                answer += 1
            else:
                answer += 2
    
    print(answer)
    
    return answer