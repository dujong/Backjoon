import sys
N = int(input())

answer = [0] * 10001

for i in range(N):
    num = int(sys.stdin.readline())
    answer[num] += 1
    
for i in range(10001):
    if answer[i] != 0:
        for j in range(answer[i]):
            print(i)