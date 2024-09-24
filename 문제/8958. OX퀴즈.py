import sys

for _ in range(int(sys.stdin.readline().rstrip())):
    score = 0
    increase_value = 1
    
    for data in list(sys.stdin.readline().rstrip()):
        if data == 'O':
            score += increase_value
            increase_value += 1
        
        else:
            increase_value = 1
            
    print(score)