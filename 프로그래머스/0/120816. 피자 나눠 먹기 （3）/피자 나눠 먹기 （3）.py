def solution(slice, n): 
    answer = 0
        
    while answer * slice < n:
        answer += 1
    
    print(answer)
    
    
    return answer