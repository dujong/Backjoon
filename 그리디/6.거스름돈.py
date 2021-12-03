N = int(input())

money = 1000 - N
price = [500, 100, 50, 10, 5, 1]

cnt = 0
for i in price:
    if i > money:
        continue
    
    cnt += money // i
    money = money % i
    
print(cnt)