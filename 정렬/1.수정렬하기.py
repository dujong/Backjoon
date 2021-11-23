N = int(input())
answer = []
for i in range(N):
    answer.append(int(input()))

answer.sort()

print(*answer, sep='\n')