import sys

N = int(sys.stdin.readline().rstrip())
for i in range(N * 2 - 1):
    print(' ' * abs(N - i - 1) + '*' * (N - abs(N - i - 1)))
