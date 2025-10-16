def solution(numbers):
    answer = 0
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] > numbers[j]:
                temp = numbers[j]
                numbers[j] = numbers[i]
                numbers[i] = temp
                
    
    last_index = len(numbers) -1
    
    answer = numbers[last_index] * numbers[last_index -1]
    
    return answer