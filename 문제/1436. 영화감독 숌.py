import sys

arr = []
idx = 666
while True:
    if "666" in str(idx):
        arr.append(idx)
        
    idx += 1
    
    if len(arr) == 10000:
        break
    
print(arr[int(sys.stdin.readline().rstrip()) - 1])