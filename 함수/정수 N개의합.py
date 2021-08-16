import sys

def sumList(a):
    return sum(a)


a = list(map(int, sys.stdin.readline().split()))

print(sumList(a))