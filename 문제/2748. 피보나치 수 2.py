import sys

dp = [0 for _ in range(int(sys.stdin.readline().rstrip()) + 1)]
dp[1] = 1

for i in range(2, len(dp)):
    dp[i] = dp[i - 1] + dp[i - 2]

print(dp[-1])