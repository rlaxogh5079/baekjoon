import sys

N = int(sys.stdin.readline().rstrip())
result = 0

for i in range(1, N + 1):
    if i + sum(map(int, str(i))) == N:
        result = i
        break

print(result)
