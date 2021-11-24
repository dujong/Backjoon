import sys

N = int(input())
answer = []

for _ in range(N):
    a, b = map(int, sys.stdin.readline().split())
    answer.append([a,b])
    
for i, j in sorted(answer):
    print(i, j)