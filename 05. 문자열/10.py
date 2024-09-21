import sys

arr = [0] * (ord('z') - ord('a'))
for i in range(5):
    arr[3 * i:3 * (i + 1)] = [i + 3] * 3
arr[3 * 5:3 * 6 + 1] = [8] * 4
arr[3 * 6 + 1: 3 * 7 + 1] = [9] * 3
arr[3 * 7 + 1: 3 * 8 + 1] = [10] * 4

value = 0
for data in sys.stdin.readline().rstrip():
    value += arr[ord(data) - ord('A')]
    
print(value)