import sys
N = int(input())
p = []

for i in range(N):
    count = 0.0

    score = [*map(int, sys.stdin.readline().split())]
    score.pop(0)

    score_Mean = sum(score)/len(score)

    for i in range(len(score)):
        if score_Mean < score[i]:
            count += 1


    p.append(count/len(score)*100)

for i in range(N):
    print('%.3f%%' % p[i])
