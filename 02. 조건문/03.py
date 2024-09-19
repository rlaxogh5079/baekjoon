import sys

year = int(sys.stdin.readline().rstrip())
print(int(year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)))