//
// Created by Майя Кораблина on 01/02/24.
//
#include <iostream>

int main()
{
    int n, m, k;
    int counter = 0;
    int nm;
    std::cin >> n >> m >> k;
    if (n < m or m < k) {
        std::cout << 0;
        return 0;
    }

    int mk = m / k;
    int rem_mk = m % k;
    while (n >= m) {
        nm = n / m;
        n = n % m;

        counter += nm * mk;
        n += nm * rem_mk;
    }
    std::cout << counter;
    return 0;
}