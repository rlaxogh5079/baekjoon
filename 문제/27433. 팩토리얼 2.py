import sys

dp = [1 for _ in range(int(sys.stdin.readline().rstrip()) + 1)]
for i in range(2, len(dp)):
    dp[i] = dp[i - 1] * i

print(dp[-1])