N = int(input())

plus = 6
room = 1
count = 1

if N == 1:
    print(1)
else :
    while True:
        room = room + (plus*count)
        if room >= N :
            print(count+1)
            break
        count += 1

