def solution(my_string):
    # 홀수 -> 숫자, 짝수 -> 기호
    arr = my_string.split()
    answer = int(arr[0])

    
    for i in range(len(arr)):
        if arr[i] == "+":
            answer += int(arr[i+1])
        elif arr[i] == "-":
            answer -= int(arr[i+1])
        print(answer)
    
    return answer