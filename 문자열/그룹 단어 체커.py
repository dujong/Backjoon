N = int(input())
total = 0

for i in range(N):
    M = input()
    word = []
    H = M[0]

    for j in range(len(M)):
        if H != M[j]:
            word.append(H)
            H = M[j]

        if j == len(M)-1:
            word.append(H)

    if len(word) == len(set(word)) :
        total += 1

print(total)



