import sys

for _ in range(int(sys.stdin.readline().rstrip())):
    rec, data = sys.stdin.readline().split()
    for d in data:
        print(d * int(rec), end="")
    
    print()