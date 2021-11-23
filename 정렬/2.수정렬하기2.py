import sys

N = int(input())
answer = []
for i in range(N):
    answer.append(int(sys.stdin.readline()))
    
for i in sorted(answer):
    sys.stdout.write(str(i)+'\n')