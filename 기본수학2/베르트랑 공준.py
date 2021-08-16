
def cnt_number(N, M):
    a = [True] * M
    a[1] = False
    m = int( M ** 0.5 )
    cnt = 0
    for i in range(2, m+1):
        if a[i] == True:
            for j in range(i+i, M, i):
                a[j] = False
    
    for i in range(N, M):
        if a[i] == True:
            cnt += 1
    return cnt

while True:
    N = int(input())

    if N==0:
        break

    print(cnt_number(N+1, N*2+1))

