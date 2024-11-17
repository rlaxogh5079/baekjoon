import sys

N, M = map(int, sys.stdin.readline().split())
arr = set(sorted([sys.stdin.readline().rstrip() for _ in range(N)]))
arr2 = set(sorted([sys.stdin.readline().rstrip() for _ in range(M)]))
result_set = set()
result = []

print(len(arr & arr2))
for d in arr & arr2:
    print(d)
