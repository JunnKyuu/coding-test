def solution(n):
    answer = 0
    
    pizza = n // 7
    rest = n % 7
    
    if rest >= 1:
        pizza += 1
    
    answer = pizza
    
    return answer