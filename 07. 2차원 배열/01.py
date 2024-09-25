import sys

N, M = map(int, sys.stdin.readline().split())
arr1 = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
arr2 = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
for i in range(N):
    for j in range(M):
        sys.stdout.write(str(arr1[i][j] + arr2[i][j]) + " ")
    
    sys.stdout.write('\n')