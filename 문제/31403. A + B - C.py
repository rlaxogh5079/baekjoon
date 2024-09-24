import sys

arr = [int(sys.stdin.readline().rstrip()) for _ in range(3)]
print(arr[0] + arr[1] - arr[2])
print(int(str(arr[0]) + str(arr[1])) - arr[2])