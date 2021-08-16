
def hansu(x):
    y = list(str(x))
    x = x + sum(list(map(int, y)))
    return x

a = []

for i in range(1,10001):
    x = hansu(i)
    a.append(x)

for i in range(1,10001):
    if i in a:
        pass
    else :
        print(i)
