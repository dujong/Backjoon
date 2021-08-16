N = int(input())

if N == 3:
    print(1)
elif N == 4 or N==7:
    print(-1)
else:
    cnt = N//5
    N = N%5

    if N == 1 or N == 3:
        cnt += 1
    elif N == 2 or N == 4:
        cnt += 2


    print(cnt)