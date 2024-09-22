import sys

def is_palindrome(data):
    for i in range(len(data) // 2):
        if data[i] != data[-i - 1]:
            return 0
    
    return 1
    
data = sys.stdin.readline().rstrip()
print(is_palindrome(data))