import sys

print("go" if len(sys.stdin.readline().rstrip()) >= len(sys.stdin.readline().rstrip())
      else "no")
