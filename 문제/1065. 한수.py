import sys

def check_is_AP_number(value):
    for idx, v in enumerate(str(value)):
        if idx == 0 or idx == len(str(value)) - 1:
            continue
        
        if int(v) - int(str(value)[idx - 1]) != int(str(value)[idx + 1]) - int(v):
            return 0
    
    return 1

dp = [0] * 1001
dp[1:10] = range(1, 10)
for i in range(10, 1001):
    dp[i] = dp[i - 1] + check_is_AP_number(i)

print(dp[int(sys.stdin.readline().rstrip())])