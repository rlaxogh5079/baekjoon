import sys

N = int(sys.stdin.readline().rstrip())
dp = [5000 for _ in range(5001)]
dp[3], dp[5] = 1, 1

for i in range(6, N + 1):
    dp[i] = min(5000, min(dp[i - 3], dp[i - 5]) + 1) 
    
print(dp[N] if dp[N] != 5000 else -1)