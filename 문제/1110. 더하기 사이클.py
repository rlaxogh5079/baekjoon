import sys
origin_num = int(sys.stdin.readline().rstrip())
cnt = 0
start_num = ((origin_num % 10 + origin_num // 10) % 10) + (origin_num % 10) * 10

while True:
    cnt += 1
    if start_num == int(origin_num):
        break
    
    start_num = ((start_num % 10 + start_num // 10) % 10) + (start_num % 10) * 10
    
print(cnt)