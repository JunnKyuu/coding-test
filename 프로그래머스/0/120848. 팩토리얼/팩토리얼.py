import math

def solution(n):    
    answer = 1
    
    while math.factorial(answer) < n:
        answer += 1
    
    if math.factorial(answer) > n:
        answer -= 1
        
    return answer