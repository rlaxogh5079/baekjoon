import sys
import heapq

X = int(sys.stdin.readline().rstrip())
heap = []
heapq.heappush(heap, 64)

while sum(heap) != X:
    data = heapq.heappop(heap) // 2
    heapq.heappush(heap, data)
    if sum(heap) < X:
        heapq.heappush(heap, data)


print(len(heap))
