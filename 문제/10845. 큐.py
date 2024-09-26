import sys
from collections import deque
queue = deque([])

for _ in range(int(sys.stdin.readline().rstrip())):
    command = sys.stdin.readline().rstrip()
    if len(command) > 5:
        command, value = command.split()
        
    if command == "push":
        queue.append(int(value))
        
    if command == "pop":
        if len(queue) == 0:
            print(-1)
        
        else:
            print(queue.popleft())
            
    if command == "size":
        print(len(queue))
        
    if command == "empty":
        print(int(len(queue) == 0))
        
    if command == "front":
        if len(queue) == 0:
            print(-1)
            
        else:
            print(queue[0])
            
    if command == "back":
        if len(queue) == 0:
            print(-1)
            
        else:
            print(queue[-1])
            
