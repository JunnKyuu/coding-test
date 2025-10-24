def solution(my_string):
    answer = []
    
    for i in my_string:
        if 47 < ord(i) < 58:
            answer.append(int(i))
    
    answer = sorted(answer)
    
    print(answer)
    
    return answer