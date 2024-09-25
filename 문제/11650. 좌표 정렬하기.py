import sys

arr = sorted([list(map(int, sys.stdin.readline().split())) for _ in range(int(sys.stdin.readline().rstrip()))], key = lambda x: (x[0], x[1]))
for d in arr:
    print(*d)