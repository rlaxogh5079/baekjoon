import sys

MAX = 1000001
eratos = [True] * MAX
eratos[0] = eratos[1] = False

for i in range(2, int(MAX ** 0.5) + 1):
    if eratos[i]:
        for j in range(i + i, MAX, i):
            eratos[j] = False

M, N = map(int, sys.stdin.readline().split())
for i in range(M, N + 1):
    if eratos[i]:
        print(i)