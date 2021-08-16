
N = M = int(input())

count = 0

while N != M or count == 0 :

    N = N % 10 * 10 + (N//10 + N%10 ) % 10
    count += 1

print(count)
