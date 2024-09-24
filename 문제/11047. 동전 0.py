import sys

N, target = map(int, sys.stdin.readline().split())
arr = sorted([int(sys.stdin.readline().rstrip()) for _ in range(N)])
cnt = 0

while target != 0:
    for i in range(N - 1, -1, -1):
        if target >= arr[i]:
            target -= arr[i]
            cnt += 1
            break
        
            

print(cnt)