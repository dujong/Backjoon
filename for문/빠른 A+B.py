import sys

A = int(sys.stdin.readline())

for i in range(0,A):
    A,B = map(int, sys.stdin.readline().split())
    print(A+B)