import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
print(*list(filter(lambda x: x < M, arr)))