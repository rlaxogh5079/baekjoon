import sys

N, M, K = map(int, sys.stdin.readline().split())
print(max(0, N * M - K))
