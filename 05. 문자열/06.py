import sys

alpha = [-1] * (ord('z') - ord('a') + 1)

for idx, data in enumerate(sys.stdin.readline().rstrip()):
    if alpha[ord(data) - ord('a')] == -1:
        alpha[ord(data) - ord('a')] = idx
    
print(*alpha)