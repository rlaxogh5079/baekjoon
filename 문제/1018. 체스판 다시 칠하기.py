import sys

N, M = map(int, sys.stdin.readline().split())
result = []
board = [list(sys.stdin.readline().rstrip()) for _ in range(N)]
for i in range(N - 7):
    for j in range(M - 7):
        draw = [0, 0]
        for a in range(i, i + 8):
            for b in range(j, j + 8):
                if (a + b) % 2:
                    draw[board[a][b] == "B"] += 1
                    
                else:
                    draw[board[a][b] == "W"] += 1
                    
        for d in draw:
            result.append(d)
        
print(min(result))