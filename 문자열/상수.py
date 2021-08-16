
A,B = input().split()

print(A,B)

A = int(A[::-1])
B = int(B[::-1])

if A>B :
    print(A)
else :
    print(B)