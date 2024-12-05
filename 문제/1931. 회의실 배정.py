import sys

N = int(sys.stdin.readline().rstrip())
arr = []
for _ in range(N):
    start_time, end_time = map(int, sys.stdin.readline().split())
    arr.append((start_time, end_time))

arr.sort(key=lambda x: (x[1], x[0]))
cnt = 0
end_time = 0
for start_time, time in arr:
    if start_time >= end_time:
        cnt += 1
        end_time = time

print(cnt)
