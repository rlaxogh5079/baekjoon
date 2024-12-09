import sys

N, M = map(int, sys.stdin.readline().split())

cards = list(map(int, sys.stdin.readline().split()))
result = 0

for i in cards:
    for j in cards:
        for k in cards:
            if i != j and j != k and k != i:
                if i + j + k <= M:
                    result = max(result, i + j + k)

print(result)
