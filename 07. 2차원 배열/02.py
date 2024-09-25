import sys
from functools import reduce

arr = reduce(lambda x, y: x + y, [list(map(int, sys.stdin.readline().split())) for _ in range(9)])
print(max(arr))
print(arr.index(max(arr)) // 9 + 1, arr.index(max(arr)) % 9 + 1)