def solution(array):
    answer = 0
    my_string = ""
    
    for i in array:
        my_string += str(i)
    
    for i in my_string:
        if i == '7':
            answer += 1
    
    return answer