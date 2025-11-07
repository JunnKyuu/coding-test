def solution(numbers, k):
    index = 2 * (k-1) % len(numbers)
    answer = numbers[index]
    return answer