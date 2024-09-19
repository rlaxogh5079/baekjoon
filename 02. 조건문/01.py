import sys

A, B = map(int, sys.stdin.readline().split())
print("==" if A == B else ">" if A > B else "<")