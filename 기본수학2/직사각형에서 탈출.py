import sys

x, y, w, h = map(int, sys.stdin.readline().split())

x1 = (w - x) if (w-x) < x else x
y1 = (h - y) if (h-y) < y else y

cnt = x1 if x1 < y1 else y1
print(cnt)
