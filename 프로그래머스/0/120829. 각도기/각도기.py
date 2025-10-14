def solution(angle):
    answer = 0
    
    if angle == 180:
        answer = 4
    elif 0 < angle < 90:
        answer = 1
    elif angle == 90:
        answer = 2
    else:
        answer = 3
    
    return answer