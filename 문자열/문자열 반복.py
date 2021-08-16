import sys
N = int(input())
P = []
K = []
for i in range(N):
    A, B = map(str, sys.stdin.readline().split())
    A = int(A)
    B = list(B)

    for j in range(len(B)):
        print(B[j]*A, end='')

    print()
    