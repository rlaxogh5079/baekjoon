import sys

price = int(sys.stdin.readline().rstrip())
T = int(sys.stdin.readline().rstrip())

for _ in range(T):
    p, c = map(int, sys.stdin.readline().split())
    price -= p * c
    
print("Yes" if price == 0 else "No")