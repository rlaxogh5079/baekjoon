import sys
import heapq

heap = []
for _ in range(int(sys.stdin.readline().rstrip())):
    N = int(sys.stdin.readline().rstrip())
    if N != 0:
        heapq.heappush(heap, N)

    else:
        if len(heap) != 0:
            print(heapq.heappop(heap))

        else:
            print(0)
