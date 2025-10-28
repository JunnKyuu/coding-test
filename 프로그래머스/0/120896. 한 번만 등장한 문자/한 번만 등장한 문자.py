def solution(s):
    freq = {}
    arr = []
    answer = ""
    
    for ch in s:
        freq[ch] = freq.get(ch, 0) + 1
    
    print(freq)
        
    for key, value in freq.items():
        if value == 1:
            arr.append(key)
    
    arr.sort()
    
    for i in arr:
        answer += i
        
    print(answer)
    
    return answer