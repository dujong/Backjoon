import sys

M, N = map(int, sys.stdin.readline().split())

a = [True] * (N+1)
a[1] = False
m = int((N+1) ** 0.5)

for i in range(2, m+1):
    if a[i] == True:
        for j in range(i+i,N+1, i):
            a[j] = False

for i in range(M, N+1):
    if a[i] == True:
        print(i)