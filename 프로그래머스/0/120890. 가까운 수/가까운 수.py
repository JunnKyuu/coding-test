def solution(array, n):
    answer = 0
    my_dict = {}
    
    for i in array:
        my_dict[i] = abs(n-i)
    
    min_value = min(my_dict.values())
    
    temp = []
    
    for key, value in my_dict.items():
        if value == min_value:
            temp.append(key)
    
    answer = min(temp)
    
    print(answer)
    
    return answer