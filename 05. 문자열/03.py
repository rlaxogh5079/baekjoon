import sys

for _ in range(int(sys.stdin.readline().rstrip())):
    string = sys.stdin.readline().rstrip()
    print(string[0] + string[-1])