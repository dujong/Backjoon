
def cnt_number(M):
    sosoo = []
    a = [True] * (M+1)
    m = int( (M+1) ** 0.5 )
    b = M//2
    for i in range(2, m+1):
        if a[i] == True:
            for j in range(i+i, M+1, i):
                a[j] = False

    
    for i in range(b,len(a)):
        if a[i] == True:
            for j in range(b,1,-1):
                if i+j == M and a[j] == True:
                    return print(j, i)


            

N = int(input())

for i in range(N):
    M = int(input())
    sosoo = cnt_number(M)
    