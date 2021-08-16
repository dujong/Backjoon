import sys

cnt = int(input())
number = list(map(int, sys.stdin.readline().split()))
stack = []
result = [-1] * cnt

for i in range(cnt):
    print(stack)
    while stack and number[stack[-1]] < number[i]:
        result[stack.pop()] = number[i]

    stack.append(i)
    

print(*result)

