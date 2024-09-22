import sys

data = [1, 1, 2, 2, 2, 8]
for idx, d in enumerate(list(map(int, sys.stdin.readline().split()))):
    print(data[idx] - d, end = " ")