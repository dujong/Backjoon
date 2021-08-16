N = input().upper()
M = list(set(N))

cnt_list = []

for i in M:
    cnt = N.count(i)
    cnt_list.append(cnt)

if cnt_list.count(max(cnt_list)) > 1 :
    print('?')

else :
    max_index = cnt_list.index(max(cnt_list))
    print(M[max_index])