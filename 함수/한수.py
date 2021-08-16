N = int(input())

def hansu(x):
    first = x//100
    second = (x//10)%10
    third = x%10

    if (first - second) == (second - third) :
        return 1
    else :
        return 0

if N == 1:
    print(1)
    
else :
    count = 0

    for i in range(1,N+1):

        if i<100 :
            count += 1
        else :
            count += hansu(i)

    print(count)
