from collections import deque 
n,m = list(map(int,input().split())) 
value = list(map(int,input().split())) 

q = deque([i+1 for i in range(n)]) 
count = 0 

for x in value: 
    while True: 
        if q.index(x) == 0: 
            q.popleft()
            break 
        
        if q.index(x) - 0 <= len(q) - q.index(x): 
            q.append(q.popleft()) 
            count += 1 
            
        else: 
            q.appendleft(q.pop())
            count += 1
print(count)
