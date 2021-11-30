import sys
N = int(input())

nums = list()
for i in range(N):
    A, B = map(int, sys.stdin.readline().split())
    nums.append([A, B])


nums.sort(key=lambda x: x[0])
nums.sort(key=lambda x: x[1])
start = 0
cnt = 0

for i, j in nums:
    if i >= start:
        cnt += 1
        start = j
        
print(cnt)
