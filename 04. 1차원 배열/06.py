import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(range(1, N + 1))

for _ in range(M):
    A, B = map(int, sys.stdin.readline().split())
    arr[A - 1], arr[B - 1] = arr[B - 1], arr[A - 1]

print(*arr)