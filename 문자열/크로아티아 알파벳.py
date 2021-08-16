Word = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

N = input()

for t in Word:
    N = N.replace(t, '*')

print(len(N))
