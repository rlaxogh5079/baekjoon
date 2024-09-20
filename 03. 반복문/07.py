import sys

T = int(sys.stdin.readline().rstrip())
for i in range(T):
    print(f"Case #{i + 1}: {sum(list(map(int, sys.stdin.readline().split())))}")