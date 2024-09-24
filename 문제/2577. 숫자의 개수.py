import sys

value = 1
for _ in range(3):
    value *= int(sys.stdin.readline().rstrip())
    
count_arr = [0] * 10
for d in str(value):
    count_arr[int(d)] += 1
    
for c in count_arr:
    print(c)