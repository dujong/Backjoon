import sys

N = list(sys.stdin.readline())[:-1]

print(''.join(sorted(N, reverse=True)))