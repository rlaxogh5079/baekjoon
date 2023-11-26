import heapq
import sys

X = int(sys.stdin.readline())
arr = [64]

while sum(arr) != X:
    min_value = arr.pop(arr.index(min(arr)))
    if min_value//2 != 0:
        arr.append(min_value//2)
        arr.append(min_value//2)
        arr.append(min_value//2)
        if sum(arr) >= X:
            arr.pop(arr.index(min_value//2))

print(len(arr))
