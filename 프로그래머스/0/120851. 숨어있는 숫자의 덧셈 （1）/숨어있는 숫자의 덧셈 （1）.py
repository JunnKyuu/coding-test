def solution(my_string):
    answer = 0
    
    for i in my_string:
        if ord(i) > 47 and ord(i) < 58:
            num = int(i)
            answer += num
    
    return answer