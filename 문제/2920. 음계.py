import sys

data = list(map(int, sys.stdin.readline().split()))
if sorted(data) == data:
    print("ascending")
    
elif sorted(data, reverse = True) == data:
    print("descending")
    
else:
    print("mixed")