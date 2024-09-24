import sys
sys.setrecursionlimit(10000)

def dfs(graph, visited, start_x, start_y):
    visited[start_x][start_y] = True
    nx = [1, 0, -1, 0]
    ny = [0, 1, 0, -1]
    for i in range(4):
        dx = start_x + nx[i]
        dy = start_y + ny[i]
        
        if dx >= 0 and dx < N and dy >= 0 and dy < M and not visited[dx][dy] and graph[dx][dy] == 1:
            dfs(graph, visited, dx, dy)

for _ in range(int(sys.stdin.readline().rstrip())):
    M, N, K = map(int, sys.stdin.readline().split())
    graph = [[0 for _ in range(M)] for _ in range(N)] 
    visited = [[False for _ in range(M)] for _ in range(N)]
    cnt = 0
    for _ in range(K):
        x, y = map(int, sys.stdin.readline().split())
        graph[y][x] = 1
        
    for i in range(N):
        for j in range(M):
            if graph[i][j] == 1 and not visited[i][j]:
                dfs(graph, visited, i, j)
                cnt += 1
    
    print(cnt)