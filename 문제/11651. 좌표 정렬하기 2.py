import sys

arr = sorted([list(map(int, sys.stdin.readline().split())) for _ in range(int(sys.stdin.readline().rstrip()))], key = lambda x: (x[1], x[0]))
for a in arr:
    print(*a)