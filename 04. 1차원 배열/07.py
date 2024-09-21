import sys

arr = [0 for _ in range(30)]

for _ in range(28):
    arr[int(sys.stdin.readline().rstrip()) - 1] = True
    
for i in range(30):
    if not arr[i]:
        print(i + 1)