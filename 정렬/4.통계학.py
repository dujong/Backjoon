import sys
from typing import Counter

N = int(input())
nums = []
for i in range(N):
    Q = int(sys.stdin.readline())
    nums.append(Q)

# 산술평균
print(round(sum(nums)/len(nums)))

# 중앙값
nums.sort()
print(nums[len(nums)//2])

# 최빈값
cnt_nums = Counter(nums).most_common(2)
if len(cnt_nums) > 1 and cnt_nums[0][1] == cnt_nums[1][1]:
    print(cnt_nums[1][0])
else:
    print(cnt_nums[0][0])
    
# 범위
print(nums[-1] - nums[0])