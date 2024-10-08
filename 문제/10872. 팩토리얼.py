import sys

dp = [1] * 13

for i in range(1, 13):
    dp[i] = i * dp[i - 1]
    
print(dp[int(sys.stdin.readline().rstrip())])