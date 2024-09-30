import sys
from collections import deque

deq = deque([])
for _ in range(int(sys.stdin.readline().rstrip())):
    try:
        command = sys.stdin.readline().rstrip()
        if len(command) >= 11:
            command, value = command.split()
            
        if command == "push_front":
            deq.appendleft(value)
        
        if command == "push_back":
            deq.append(value)
            
        if command == "front":
            print(deq[0])
        
        if command == "back":
            print(deq[-1])
            
        if command == "pop_front":
            print(deq.popleft())
        
        if command == "pop_back":
            print(deq.pop())
            
        if command == "size":
            print(len(deq))
        
        if command == "empty":
            print(int(len(deq) == 0))
            
    except:
        print(-1)