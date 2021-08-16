
import sys

N = int(input())
a = [True] * (10001)
a[1] = False
m = int(10001 ** 0.5)
k = 0
mul = []
elm = []

# 에라토스테네스의 체 값 구하기
for i in range(2, m+1):
    if a[i] == True:
        for j in range(i+i, 10001, i):
            a[j] = False
# list에 소수만 다시 append
for i in range(2,10001):
    if a[i] == True:
        mul.append(i)
# 소수만 이루어진 list로 소인수 분해 작업


while N != 1:
    C = mul[k]
    cnt = 0
    if N%C == 0:
        N = N // C
        elm.append(C)
    else:
        k += 1

#list 출력
for i in range(len(elm)):
    print(elm[i])


'''
v = int(input())
i = 2

while v != 1:
    if v%i == 0:
        v = v//i
        print(i)
    else:
        i+=1
        '''