import math
A, B, V = map(int, input().split())


if V == A:
    print(1)

else:
    count = 1
    V = V - A
    A = A-B
    count = count + math.ceil(V/A)
    print(count)
