import sys

arr = list()
for _ in range(int(sys.stdin.readline().rstrip())):
    arr.append(sys.stdin.readline().split())
    arr[-1][0] = int(arr[-1][0])

arr.sort(key = lambda x: (x[0]))
for d in arr:
    print(*d)