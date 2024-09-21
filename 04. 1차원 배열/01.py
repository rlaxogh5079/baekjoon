import sys

N = int(sys.stdin.readline().rstrip())
arr = list(map(int, sys.stdin.readline().split()))
print(arr.count(int(sys.stdin.readline().rstrip())))