import sys

for _ in range(int(sys.stdin.readline().rstrip())):
    stack = []
    flag = True
    for d in sys.stdin.readline().rstrip():
        if d == "(":
            stack.append(d)
        
        elif d == ")":
            if len(stack) != 0:
                stack.pop()
                
            else:
                flag = False
                break
        
    if len(stack) == 0 and flag:
        print("YES")
        
    else:
        print("NO")
    