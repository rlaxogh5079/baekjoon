import sys

x = int(sys.stdin.readline().rstrip())
y = int(sys.stdin.readline().rstrip())

position = 0

if y > 0:
    if x > 0:
        position = 1
    
    else:
        position = 2
        
else:
    if x < 0:
        position = 3
        
    else:
        position = 4
        
print(position)