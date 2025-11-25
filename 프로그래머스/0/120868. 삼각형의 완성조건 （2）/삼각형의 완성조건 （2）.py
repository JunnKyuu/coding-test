def solution(sides):
    answer = 0
    sides.sort()
    a = sides[0]
    b = sides[1]
    c = b + 1
    
    # b가 최대일 때
    for i in range(1, b+1):
        if a + i > b:
            answer += 1
    
    # c가 최대일 때
    while a + b > c:
        answer += 1
        c += 1
    
    return answer