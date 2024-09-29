import sys

N = int(sys.stdin.readline().rstrip())
dp = [1] * (N + 1)
for i in range(2, N + 1):
    dp[i] = dp[i - 1] * i

cnt = 0
while dp[N] > 0:
    if dp[N] % 10 == 0:
        cnt += 1
    
    else:
        break
    
    dp[N] //= 10
    
print(cnt)