input()
N = list(str(input()))
N = list(map(int, N))
M = 0

for i in range(len(N)):
    M  += N[i]

print(M)
