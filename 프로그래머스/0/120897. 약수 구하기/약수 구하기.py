# 두수의 곱 = n이면 n의 약수
# 작은 수는 제곱근 보다 작아야함

import math

def solution(n):
    answer = []
    sqrt = math.isqrt(n) # 제곱근 구하기
    
    for i in range(1, sqrt+1):
        j = n // i # 몫구하기
        
        if i * j == n:
            if i == j:
                answer.append(i) # 제곱수면 1개만 추가
            else:
                # 제곱수가 아니면 i, j 둘다 추가
                answer.append(i)
                answer.append(j)
    
    answer.sort()
    print(answer)
    
    return answer