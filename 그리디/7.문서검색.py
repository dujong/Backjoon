S = input()
M = input()

cnt = 0
while True:
    num = S.rfind(M)
    
    if num >=0:
        S = S[:num]
        cnt += 1
        
    else:
        print(cnt)
        break