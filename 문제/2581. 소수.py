import sys

eratos = [True] * 10001
eratos[0] = False
eratos[1] = False
for i in range(2, 101):
    if eratos[i]:
        for j in range(i * i, 10001, i):
            eratos[j] = False

n = int(sys.stdin.readline().rstrip())
m = int(sys.stdin.readline().rstrip())
primes = [i for i in range(n, m + 1) if eratos[i]]

if primes:
    print(sum(primes))
    print(min(primes))

else:
    print(-1)
