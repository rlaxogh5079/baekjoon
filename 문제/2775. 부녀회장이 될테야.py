import sys

dp = []
dp.append(list(range(1, 15)))

for i in range(1, 15):
    row = []
    for j in range(1, 15):
        row.append(sum(dp[i - 1][:j]))
    dp.append(row)

for _ in range(int(sys.stdin.readline().rstrip())):
    k = int(sys.stdin.readline().rstrip())
    n = int(sys.stdin.readline().rstrip())
    print(dp[k][n - 1])