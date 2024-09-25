import sys
from collections import deque

def bfs(graph, visited):
    queue = deque([1])
    
    while queue:
        node = queue.popleft()
        if visited[node]:
            continue
        
        visited[node] = True
        queue.extend(graph[node])


N = int(sys.stdin.readline().rstrip())
M = int(sys.stdin.readline().rstrip())
graph = [[] for _ in range(N + 1)]
visited = [False] * (N + 1)
for _ in range(M):
    x, y = map(int, sys.stdin.readline().split())
    graph[x].append(y)
    graph[y].append(x)

bfs(graph, visited)
print(sum(visited) - 1)