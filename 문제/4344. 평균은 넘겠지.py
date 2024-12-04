import sys

N = int(sys.stdin.readline().rstrip())
for _ in range(N):
    scores = list(map(int, sys.stdin.readline().split()))
    avg = sum(scores[1:]) / scores[0]
    cnt = 0
    for score in scores[1:]:
        if score > avg:
            cnt += 1
    print(f'{cnt / scores[0] * 100:.3f}%')
