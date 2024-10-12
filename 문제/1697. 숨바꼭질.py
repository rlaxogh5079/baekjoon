import sys
from collections import deque

N, K = map(int, sys.stdin.readline().split())
visited = [0] * 100001
def bfs(start_node, target_node, visited):
    queue = deque()
    queue.append(start_node)
    while queue:
        node = queue.popleft()
        
        if node == target_node:
            return visited[target_node]

        for i in (node + 1, node - 1, node * 2):
            if 0 <= i <= 100000 and not visited[i]:
                visited[i] = visited[node] + 1
                queue.append(i)
    
print(bfs(N, K, visited))