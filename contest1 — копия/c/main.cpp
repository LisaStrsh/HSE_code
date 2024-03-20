#include <iostream>

int main() {

    int v, t;
    std:: cin>> v >> t;
    int s = 109;
    int res;

    int dist = (v*t) % s;
    res = (s + dist)%109;
    std:: cout<< res;

    return 0;
}
