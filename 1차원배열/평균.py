import sys

input()
score = [*map(float, sys.stdin.readline().split())]

index_ = 0
M = max(score)

for i in range(len(score)) :
    score[i] = score[i] / M * 100

print('%.2f' %( sum(score)/len(score) ))