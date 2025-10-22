def solution(array):
    answer = 0
    
    for i in range(0, len(array)-1):
        for j in range(i+1, len(array)):
            if array[i] > array[j]:
                temp = array[j]
                array[j] = array[i]
                array[i] = temp
    
    index = len(array) // 2
    answer = array[index]
    print(array[index])
    
    return answer