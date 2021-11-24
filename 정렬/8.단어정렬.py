import sys

N = int(input())
answer = []

for _ in range(N):
    answer.append(sys.stdin.readline().strip())

answer = list(set(answer))
    
answer.sort(key = lambda x : (len(x), x))

for i in answer:
    print(i)
    
    