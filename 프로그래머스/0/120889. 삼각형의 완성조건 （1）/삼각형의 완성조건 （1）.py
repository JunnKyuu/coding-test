def solution(sides):
    answer = 2
    
    for i in range(len(sides)):
        for j in range(i + 1, len(sides)):
            if sides[i] > sides[j]:
                temp = sides[j]
                sides[j] = sides[i]
                sides[i] = temp
    
    print(sides)
    
    if sides[2] < sides[0] + sides[1]:
        answer = 1
    
    return answer