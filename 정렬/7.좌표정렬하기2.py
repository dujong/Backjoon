import sys

N = int(input())
answer = []

for _ in range(N):
    a, b = map(int, sys.stdin.readline().split())
    answer.append([b, a])
    
for i, j in sorted(answer):
    print(j, i)