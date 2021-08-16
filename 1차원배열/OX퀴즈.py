N = int(input())
H = []

for i in range(N):
    score = 0
    count = 1
    M = input()

    for j in range(len(M)):
        if(M[j] == 'O'):
            score += count
            count += 1
        else:
            count = 1

    H.append(score)

for i in range(N):
    print(H[i])