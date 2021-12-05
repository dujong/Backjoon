import heapq
import sys
N = int(input())

answer = list()
for i in range(N):
    heapq.heappush(answer, int(sys.stdin.readline()))

cnt = 0
if len(answer) == 1:
    print(0)
    
else:
    while len(answer) > 1:
        A = heapq.heappop(answer)
        B = heapq.heappop(answer)
        
        cnt += (A+B)
        heapq.heappush(answer, (A+B))
        
    print(answer)