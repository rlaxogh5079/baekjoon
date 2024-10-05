import sys
MAX = 1001
eratos = [True] * MAX
eratos[0] = eratos[1] = False

for i in range(2, int(MAX ** 0.5) + 1):
    if eratos[i]:
        for j in range(i + i, MAX, i):
            eratos[j] = False
            
int(sys.stdin.readline().rstrip())
cnt = 0
for i in list(map(int, sys.stdin.readline().split())):
   if eratos[i]:
        cnt += 1
        
print(cnt)