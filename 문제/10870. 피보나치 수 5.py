import sys

N = int(sys.stdin.readline().rstrip())


def fib(n):
    if n < 2:
        return n

    elif n == 2:
        return 1

    else:
        return fib(n - 1) + fib(n - 2)


print(fib(N))
