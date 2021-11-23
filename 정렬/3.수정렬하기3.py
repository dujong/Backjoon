import sys
N = int(sys.stdin.readline())

answer = [0] * (N+1)

for i in range(N):
    num = int(sys.stdin.readline())
    answer[num] += 1
    
for i in range(N+1):
    for j in range(answer[i]):
        print(i)