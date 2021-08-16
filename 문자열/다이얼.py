Word = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']

N = input()
total = 0

for i in range(len(N)):
    for j in Word:
        if N[i] in j:
            total += Word.index(j) + 3

print(total)