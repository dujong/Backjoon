array = [[0 for col in range(15)] for row in range(15)]

for i in range(15):
    array[0][i] = i+1
    array[i][0] = 1

T = int(input())

for i in range(T):
    k = int(input())
    n = int(input())

    if k == 0:
        print(array[k][n-1])

    else:
        for j in range(1,k+1):
            for l in range(1,n):
                array[j][l] = array[j][l-1] + array[j-1][l]
        print(array[k][n-1])
        

