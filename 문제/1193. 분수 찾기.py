import sys

number = int(sys.stdin.readline().rstrip())
line = 1

while number > line:
    number -= line
    line += 1
    
if line % 2 == 0:
    a = number
    b = line - number + 1
    
else:
    a = line - number + 1
    b = number
    
print(f"{a}/{b}")