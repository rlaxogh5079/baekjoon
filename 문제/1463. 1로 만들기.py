import sys

N = int(sys.stdin.readline().rstrip())
dp = [1000000] * 1000001
dp[1] = 0
dp[2] = dp[3] = 1

for i in range(4, N + 1):
    if i % 6 == 0:
        dp[i] = min(dp[i // 3], dp[i // 2], dp[i - 1]) + 1
    
    elif i % 3 == 0:
        dp[i] = min(dp[i // 3], dp[i - 1]) + 1
    
    elif i % 2 == 0:
        dp[i] = min(dp[i // 2], dp[i - 1]) + 1
        
    dp[i] = min(dp[i], dp[i - 1] + 1)
        

print(dp[N])