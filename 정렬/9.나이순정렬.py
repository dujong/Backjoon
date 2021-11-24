import sys

N = int(input())
answer = []
for i in range(N):
    a, b = sys.stdin.readline().split()
    answer.append([i+1, a, b])

# if N == 1:
#     print(a, b)
# else:

answer.sort(key=lambda x:(x[1], x[0]))
print(answer)
for _, num, name in answer:
    print(num, name)