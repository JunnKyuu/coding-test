def solution(my_str, n):
    answer = []
    temp = ""
    
    for i in my_str:
        temp += i
        if len(temp) == n:
            answer.append(temp)
            temp = ""
            
    if len(temp) < n and len(temp) != 0:
        answer.append(temp)
    
    return answer