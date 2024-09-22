import sys

data = sys.stdin.readline().rstrip()
print(len(data) - data.count("c=") - data.count("c-") - data.count("z=") - data.count("d-") - data.count("s=") - data.count("dz=") - data.count("nj") - data.count("lj"))