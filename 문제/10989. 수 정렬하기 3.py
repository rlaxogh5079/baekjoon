import sys

N = int(sys.stdin.readline().rstrip())
arr = [0] * 10001

for _ in range(N):
    arr[int(sys.stdin.readline().rstrip())] += 1

for i in range(len(arr)):
    if arr[i] != 0:
        for _ in range(arr[i]):
            print(i)
