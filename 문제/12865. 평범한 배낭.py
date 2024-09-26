import sys

N, K = map(int, sys.stdin.readline().split())
arr = sorted([list(map(int, sys.stdin.readline().split())) for _ in range(N)], key = lambda x: (x[1], x[0]))
dp = [[0, 0]] * (N  + 1)
for i in range(1, N):
    for j in range(1, i):
        if dp[i][0] + arr[j][0] <= K and dp[i - 1][1] + arr[j][1] > dp[i][1]:
            dp[i][0] = dp[i - 1][0] + arr[j][0]
            dp[i][1] = dp[i - 1][1] + arr[j][1]
            
print(dp)