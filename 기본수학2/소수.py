N = int(input())
M = int(input())

a = [True] * (M+1)
a[1] = False
m = int( (M+1) ** 0.5)
sum = 0
min = 0

for i in range(2, m+1):
    if a[i] == True:
        for j in range(i+i, M+1, i):
            a[j] = False

for i in range(N,M+1):
    if a[i] == True:
        sum += i

    if a[i] == True and min == 0:
        min = i

if min == 0:
    print(-1)

else :
    print(sum)
    print(min)