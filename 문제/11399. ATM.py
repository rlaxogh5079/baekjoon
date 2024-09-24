import sys

N = int(sys.stdin.readline().rstrip())
arr = sorted(list(map(int, sys.stdin.readline().split())))

for i in range(1, N):
    arr[i] += arr[i - 1]
    
print(sum(arr))