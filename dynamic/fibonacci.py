def fib(num, memo = {}):
    if (num <= 0):
        return 0
    if num <= 2:
        return 1

    if num in memo:
        return memo[num]

    memo[num] = fib(num - 1, memo) + fib(num - 2, memo)
    return memo[num]

num = int(input("enter number:"))
print(fib(num))
