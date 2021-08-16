import sys

while True:
    A = list(map(int ,input().split()))
    A.sort()
    
    if sum(A) == 0:
        break
    elif ((A[0]**2) + (A[1]**2)) == A[2]**2:
        print('right')
    else:
        print('wrong')
    
