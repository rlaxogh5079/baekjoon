import sys

data = sys.stdin.readline().replace("\n", "")
print(len(data.split(" ")) - int(data[0] == " ") - int(data[-1] == " "))