import sys

fact = [1, 1]
for i in range(1, 30+1):
    fact.append(fact[i]*(i+1))

for _ in range(int(sys.stdin.readline())):
    N, M = map(int, sys.stdin.readline().split())
    answer = fact[M] // fact[M-N] // fact[N]
    print(answer)
