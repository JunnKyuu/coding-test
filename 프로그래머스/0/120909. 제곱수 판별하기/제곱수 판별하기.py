import math

def solution(n):
    answer = 0
    root = math.sqrt(n)
    
    if float.is_integer(root):
        answer = 1
    else:
        answer = 2

    return answer