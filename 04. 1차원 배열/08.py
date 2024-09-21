import sys

arr = [0 for _ in range(42)]

for _ in range(10):
    arr[int(sys.stdin.readline().rstrip()) % 42 - 1] = 1
    
print(arr.count(1))