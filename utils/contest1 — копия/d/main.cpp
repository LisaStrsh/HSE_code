#include <iostream>

int main() {

    int n;
    std:: cin >> n;

    float res = 1;
    float num = -1;

    for( int i = 2; i < n + 1; i++)
    {
        res += num/i;
        num*=(-1);
    }
    std::cout<<res;

    return 0;
}
