M = int(input())


for i in range(M):
    H, W, N = map(int, input().split())

    Q = N % H
    A = 1 + N//H
    
    if Q == 0:
        Q = H
        A -= 1
        
    print(Q*100+A)