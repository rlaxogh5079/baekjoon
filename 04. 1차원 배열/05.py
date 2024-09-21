import sys

N, M = map(int, sys.stdin.readline().split())
arr = list([0 for _ in range(N)])
for _ in range(M):
    i, j, k = map(int, sys.stdin.readline().split())
    arr[i - 1: j] = [k for _ in range(j - i + 1)]

print(*arr)