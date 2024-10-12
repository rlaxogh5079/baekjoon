import sys

N, K = map(int, sys.stdin.readline().split())
arr = list(range(1, N + 1))
result = []
idx = K - 1

while True:
    result.append(str(arr.pop(idx)))
    if len(arr) == 0:
        break
    
    idx = (idx + K - 1) % len(arr)
    
print(f"<{', '.join(result)}>")