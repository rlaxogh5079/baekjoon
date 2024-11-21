import sys

arr = [int(sys.stdin.readline()) for _ in range(7)]
sum_value = sum([x for x in arr if x % 2]) or -1
print(sum_value)
if sum_value != -1:
    print(min([x for x in arr if x % 2]))
