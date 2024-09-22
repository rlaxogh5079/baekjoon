import sys

cnt = 0
for _ in range(int(sys.stdin.readline().rstrip())):
    flag = True
    alpha_check_list = [0] * (ord('z') - ord('a') + 1)
    arr = sys.stdin.readline().rstrip()
    prev_data = ''
    for data in arr:
        if alpha_check_list[ord(data) - ord('a')] == 1 and prev_data != data:
            flag = False
            break
        
        alpha_check_list[ord(data) - ord('a')] = 1
        prev_data = data
    
    if flag:
        cnt += 1

print(cnt)