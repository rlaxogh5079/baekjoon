import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
queue = []

left, right = 0, 10**9
while left <= right:
    middle = (left + right) // 2
    if sum(map(lambda x: max(0, x-middle), arr)) < M:
        right = middle - 1
        
    elif sum(map(lambda x: max(0, x-middle), arr)) >= M:
        left = middle + 1
        queue.append(middle)
    

print(max(queue))