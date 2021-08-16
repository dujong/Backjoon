import sys

cnt = int(sys.stdin.readline())

for i in range(cnt):
    stack = []
    check = True
    string = sys.stdin.readline()

    for j in string:
        if j == '(':
            stack.append(j)
        
        elif j == ')':
            if stack:
                stack.pop()
            else:
                check = False

    if len(stack) != 0 or check == False:
        print('NO')
    
    elif len(stack) == 0:
        print('YES')
