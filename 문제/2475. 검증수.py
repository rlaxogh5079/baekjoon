import sys

print(sum(map(lambda x: pow(int(x), 2), sys.stdin.readline().split())) % 10)