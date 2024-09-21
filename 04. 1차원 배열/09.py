import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(range(1, N + 1))

for _ in range(M):
    A, B = map(int, sys.stdin.readline().split())
    arr[A - 1: B] = reversed(arr[A - 1: B])

print(*arr)