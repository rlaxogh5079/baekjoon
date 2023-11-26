import sys

n = int(sys.stdin.readline())
word = []

for i in range(n):
    word.append(sys.stdin.readline())

set_word = list(set(word))
sort_word = []

for i in set_word:
    sort_word.append((len(i), i))

result = sorted(sort_word)

for len_word, word in result:
    print(word, end="")
