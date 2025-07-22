import sys

words = [["*" for i in range(15)] for j in range(5)]
for i in range(5):
  word = sys.stdin.readline().rstrip()
  for j in range(len(word)):
    words[i][j] = word[j]

for i in range(15):
  for j in range(5):
    if words[j][i] != "*":
      print(words[j][i], end="")