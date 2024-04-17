#include <iostream>

int main() {

    std:: string list;
    std:: cin >> list;
    unsigned int res = 0;

    for( int i = 0; i < list.length(); i++)
    {
        res += list[i] - '0';
    }

    std:: cout << res;

    return 0;
}
