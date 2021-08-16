'''
N = []
A = [0,0,0,0,0,0,0,0,0,0]

for _ in range(3):
    i = int(input())
    N.append(i)
    
M = N[0] * N[1] * N[2]

while M != 0:
    H = M%10
    M = M//10
    A[H] += 1

for k in range(10):
    print(A[k])
'''
q = lambda : int(input())

print(*map(f'{q()*q()*q()}' .count, '0123456789'), sep='\n')