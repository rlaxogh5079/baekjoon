import sys

stack = []
for _ in range(int(sys.stdin.readline().rstrip())):
    command = sys.stdin.readline().rstrip()
    if len(command) > 5:
        command, value = command.split()
        
    if command == "push":
        stack.append(value)
    
    elif command == "top":
        try:
            print(stack[-1])
        
        except IndexError:
            print(-1)
    
    elif command == "size":
        print(len(stack))
    
    elif command == "empty":
        print(int(len(stack) == 0))
        
        
    elif command == "pop":
        try:
            print(stack.pop())
        except IndexError:
            print(-1)
    