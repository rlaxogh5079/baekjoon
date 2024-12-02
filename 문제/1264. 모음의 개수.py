import sys

while True:
    sentence = sys.stdin.readline().rstrip()
    if sentence == '#':
        break
    sentence = sentence.lower()
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 0
    for vowel in vowels:
        count += sentence.count(vowel)
    print(count)
