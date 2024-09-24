dp = [0] * 20000
for i in range(1, 10001):
    value = sum(list(map(int, list(str(i))))) + i
    dp[value] = 1

for i in range(1, 10001):
    if not dp[i]:
        print(i)