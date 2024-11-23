import sys

print(abs(sum([int(x) if idx == 0 else -int(x) for idx,
               x in enumerate(list(map(lambda y: str(int(y)), sys.stdin.readline().split())))])))
