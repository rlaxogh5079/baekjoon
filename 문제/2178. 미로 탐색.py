import sys
from collections import deque

def bfs(graph, visited):
    queue = deque([(0, 0)])
    while queue:
        x, y = queue.popleft()
        dx = [1, 0, -1, 0]
        dy = [0, 1, 0, -1]
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx < 0 or nx >= N or ny < 0 or ny >= M or visited[nx][ny] != 1:
                continue
            
            visited[nx][ny] = visited[x][y] + 1
                    
            if nx == N - 1 and ny == M - 1:
                return
            
            if graph[nx][ny] == 1:
                queue.append((nx, ny))

N, M = map(int, sys.stdin.readline().split())
graph = [list(map(int, list(sys.stdin.readline().rstrip()))) for _ in range(N)]
visited = [[1 for _ in range(M)] for _ in range(N)]
bfs(graph, visited)
print(visited[N - 1][M - 1])