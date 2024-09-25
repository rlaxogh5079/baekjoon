import sys

arr = [[0 for _ in range(100)] for _ in range(100)]
for _ in range(int(sys.stdin.readline().rstrip())):
    x, y = map(int, sys.stdin.readline().split())
    for a in range(x, x + 10):
        for b in range(y, y + 10):
            arr[a - 1][b - 1] += 1
            

value = 0
for i in range(100):
    for j in range(100):
        if arr[i][j] >= 1:
            value += 1
            
print(value)