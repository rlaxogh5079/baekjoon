import sys

arr = sorted(set([sys.stdin.readline().rstrip() for _ in range(int(sys.stdin.readline().rstrip()))]), key = lambda x: (len(x), x))
for d in arr:
    print(d)