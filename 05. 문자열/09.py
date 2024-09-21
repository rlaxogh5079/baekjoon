import sys

print(max(list(map(lambda x: int(x.rstrip()[::-1]), sys.stdin.readline().split()))))