def solution(emergency):
    answer = []
    temp = sorted(emergency)
    temp.reverse()
    print(temp)
    print(emergency)
    
    for i in emergency:
        answer.append(temp.index(i) + 1)

    print(answer)
    
    return answer