import sys

def binary_search(data, arr):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        middle = (left + right) // 2
        if data > arr[middle]:
            left = middle + 1
        
        elif data < arr[middle]:
            right = middle - 1
        
        elif data == arr[middle]:
            return 1
    
    return 0
            

N = int(sys.stdin.readline().rstrip())
arr = sorted(list(map(int, sys.stdin.readline().split())))

M = int(sys.stdin.readline().rstrip())
for i in list(map(int, sys.stdin.readline().split())):
    print(binary_search(i, arr))