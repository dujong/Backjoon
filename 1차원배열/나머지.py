A = set()
N = []

for i in range(10):
    M = int(input())
    N.append(M)
    N[i] = N[i] % 42
    A.add(N[i])

print(len(A))