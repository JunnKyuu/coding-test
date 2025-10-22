def solution(my_string, letter):
    answer = ''
    
    for i in my_string:
        for j in letter:
            if i != j:
                answer += i
                
    return answer