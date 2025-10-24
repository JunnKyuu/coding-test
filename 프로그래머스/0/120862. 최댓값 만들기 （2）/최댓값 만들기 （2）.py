def solution(numbers):
    numbers = sorted(numbers)
    last_idx = len(numbers) -1
    
    num1 = numbers[0] * numbers[1]
    num2 = numbers[last_idx -1] * numbers[last_idx]
    
    if num1 > num2:
        return num1
    else:
        return num2