import sys
first_heap = []
second_heap = []

N = int(sys.stdin.readline().rstrip())
first_heap = sorted(list(map(int, sys.stdin.readline().split())))
second_heap = sorted(
    list(map(int, sys.stdin.readline().split())), reverse=True)
sum_value = 0

for i in range(N):
    sum_value += first_heap[i] * second_heap[i]


print(sum_value)
