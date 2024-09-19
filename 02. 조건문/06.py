import sys

H, M = map(int, sys.stdin.readline().split())
time = int(sys.stdin.readline().rstrip())

M += time
plus_H = M // 60
H += plus_H
M -= plus_H * 60

H %= 24

print(H, M)