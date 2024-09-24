import sys
from collections import deque

def dfs(start_node, graph, visited):
    if visited[start_node - 1]:
        return
    visited[start_node - 1] = True
    print(start_node, end = " ")
    for i in range(M):
        if graph[i][0] == start_node and not visited[graph[i][1] - 1]:
            dfs(graph[i][1], graph, visited)
        
        if graph[i][1] == start_node and not visited[graph[i][0] - 1]:
            dfs(graph[i][0], graph, visited)

def bfs(start_node, graph, visited):
    queue = deque([start_node])
    while queue:
        node = queue.popleft()
        if visited[node - 1]:
            continue
        
        visited[node - 1] = True
        print(node, end = " ")
            
        for i in range(M):
            if graph[i][0] == node and not visited[graph[i][1] - 1]:
                queue.append(graph[i][1])
            
            if graph[i][1] == node and not visited[graph[i][0] - 1]:
                queue.append(graph[i][0])
        

N, M, V = map(int, sys.stdin.readline().split())
graph = [sorted(list(map(int, sys.stdin.readline().split()))) for _ in range(M)]
graph.sort(key = lambda x: [x[0], x[1]])
dfs(V, graph, [False for _ in range(N)])
print()
bfs(V, graph, [False for _ in range(N)])