import sys

N = int(sys.stdin.readline().rstrip())
arr = list(map(int, sys.stdin.readline().split()))
arr = list(map(lambda x: x / max(arr) * 100, arr))

print("%.2f" % (sum(arr) / len(arr)))