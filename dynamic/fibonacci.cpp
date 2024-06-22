#include <cstdlib>
#include <iostream>
#include <map>

long long fib(long long num, std::map<long long, long long> &memo)
{
    if (num <= 0) {
        return 0;
    }
    if (num <= 2) {
        return 1;
    }

    if (memo.find(num) != memo.end()) {
        return memo[num];
    }
    memo[num] = fib(num - 1, memo) + fib(num - 2, memo);
    return memo[num];
}

int main(int argc, char* argv[])
{
    long long num = std::atoi(argv[1]);
    std::map<long long, long long> memo;
    std::cout << fib(num, memo) << '\n';

    return 0;
}
