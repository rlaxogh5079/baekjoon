import sys

T = int(sys.stdin.readline().rstrip())
for _ in range(T):
    print(sum(list(map(int, sys.stdin.readline().split()))))