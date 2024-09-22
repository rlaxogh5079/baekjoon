import sys
from collections import deque

def bfs(graph):
    visited = [[False for _ in range(N)] for _ in range(M)]
    queue = deque([])
    depth = 0
    for i in range(M):
        for j in range(N):
            if graph[i][j] == 1:
                queue.append((i, j, depth))
                visited[i][j] = True
                
    while queue:
        x, y, depth = queue.popleft()
        dx = [1, 0, -1, 0]
        dy = [0, 1, 0, -1]
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx < 0 or nx >= len(graph) or ny < 0 or ny >= len(graph[0]) or graph[nx][ny] == -1:
                continue
            
            if not visited[nx][ny]:
                visited[nx][ny] = True
                graph[nx][ny] = depth + 1
                queue.append((nx, ny, depth + 1))
                
    return depth
                
def check_zero_exist():
    for i in range(len(graph)):
        for j in range(len(graph[i])):
            if graph[i][j] == 0:
                return True
            
    return False

N, M = map(int, sys.stdin.readline().split())
graph = [list(map(int, sys.stdin.readline().split())) for _ in range(M)]
result = bfs(graph)
    
print(result if not check_zero_exist() else -1)