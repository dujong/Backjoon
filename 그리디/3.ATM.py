import sys
N = int(input())

nums = list(map(int, sys.stdin.readline().split()))
nums.sort()

cnt = 0
for i in range(len(nums)):
    cnt += sum(nums[:i+1])
    
print(cnt)
