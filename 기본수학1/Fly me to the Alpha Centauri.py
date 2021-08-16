import sys
N = int(input())

for i in range(N):
    A,B = map(int, sys.stdin.readline().split())
    distance = B-A
    count = 0
    move = 1
    move_plus = 0

    while move_plus < distance :
        count += 1
        move_plus += move
        if count % 2 == 0 : 
            move += 1  
    print(count)

   