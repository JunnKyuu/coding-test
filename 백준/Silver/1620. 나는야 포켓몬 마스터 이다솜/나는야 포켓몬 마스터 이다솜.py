import sys

N, M = map(int, sys.stdin.readline().split())

d1 = {}
d2 = {}
for i in range(N):
    name = sys.stdin.readline().rstrip()
    d1[i + 1] = name    
    d2[name] = i + 1

for _ in range(M):
    data = sys.stdin.readline().rstrip()
    if (data.isdecimal()):
        print(d1[int(data)])
    else:
        print(d2.get(data))