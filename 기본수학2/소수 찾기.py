import sys

N = int(input())
T = list(map(int, sys.stdin.readline().split()))
a = [True] * (1001)
m = int(1001 ** 0.5)
cnt = 0

a[1] = False

for i in range(2, m+1):
    if a[i] == True:
        for j in range(i+i, 1001, i):
            a[j] = False

for i in range(N):
    if a[T[i]] == True:
        cnt += 1

print(cnt)
