def solution(array, height):
    answer = 0
    arr = []
    
    for i in array:
        if i > height:
            arr.append(i)
    
    print(arr)
    
    answer = len(arr)
    
    return answer