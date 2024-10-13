import sys

dp = [0] * (100 + 2)
dp[1], dp[2], dp[3] = 1, 1, 1
for i in range(4, 102):
    dp[i] = dp[i - 2] + dp[i - 3]
    
for _ in range(int(sys.stdin.readline().rstrip())):
    print(dp[int(sys.stdin.readline().rstrip())])