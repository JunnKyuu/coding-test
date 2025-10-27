import math

# 최소공배수 = 두 수의 곱 / 최대공약수
def lcm(a, b):
    return a * b // math.gcd(a, b)

def solution(n):
    return lcm(n, 6) // 6