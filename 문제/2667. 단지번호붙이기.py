import sys
from collections import deque

def bfs(graph, visited, x, y):
    queue = deque([(x, y)])
    cnt = 1
    dx = [1, 0, -1, 0]
    dy = [0, 1, 0, -1]
    
    while queue:
        x, y = queue.popleft()
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx < 0 or nx >= N or ny < 0 or ny >= N or visited[nx][ny]:
                continue
            
            if graph[nx][ny] == 1:
                queue.append((nx, ny))
                visited[nx][ny] = True
                cnt += 1
                
    return cnt


N = int(sys.stdin.readline().rstrip())
graph = [list(map(int, list(sys.stdin.readline().rstrip()))) for _ in range(N)]
visited = [[False for _ in range(N)] for _ in range(N)]
results = []

for i in range(N):
    for j in range(N):
        if visited[i][j] == False and graph[i][j] == 1:
            visited[i][j] = True
            results.append(bfs(graph, visited, i, j))

results.sort()
print(len(results))
for r in results:
    print(r)