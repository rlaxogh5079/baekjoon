import sys

for _ in range(int(sys.stdin.readline().rstrip())):
    H, W, N = map(int, sys.stdin.readline().split())
    print(f"{(N-1)%H + 1}{str((N-1)//H + 1).rjust(2, '0')}")