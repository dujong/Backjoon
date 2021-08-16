import sys
a = int(sys.stdin.readline())

stack = []

for i in range(a):
    b = sys.stdin.readline().split()

    if b[0] == 'push':
        stack.append(b[1])
    
    elif 'pop' == b[0]:
        if len(stack) != 0:
            print(stack.pop())
        else:
            print(-1)

    elif 'size' == b[0]:
        print(len(stack))

    elif 'empty' == b[0]:
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    
    elif 'top' == b[0]:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])