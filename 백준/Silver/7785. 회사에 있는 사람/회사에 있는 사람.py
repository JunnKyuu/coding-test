import sys
input = sys.stdin.readline

dct = {}

n = int(input().rstrip())

for _ in range(n):
    name, el = input().rstrip().split()
    if el == 'enter':
        dct[name] = True
    else:
        del dct[name]

print('\n'.join(sorted(dct.keys(), reverse=True)))