M = list(input())
N = []
for i in range(97,123):
    if chr(i) in M:
        N.append(M.index(chr(i)))
    else :
        N.append(-1)
        
for i in range(0,26):
    print(N[i], end=' ')
