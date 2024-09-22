import sys

alpha = [0] * (ord('z') - ord('a') + 1)

for d in sys.stdin.readline().rstrip():
    alpha[ord(d.lower()) - ord('a')] += 1
    
if alpha.count(max(alpha)) != 1:
    print("?")
    
else:
    print(chr(alpha.index(max(alpha)) + ord('a')).upper())