#include <iostream>

int main() {

    int n, k , m;
    std:: cin >> n >> k >> m;

    int rem = 0;
    int zag = 0;
    int det = k / m;
    int res = 0;
    if (k>=m){
        while (n>=k)
        {
            rem = n % k;
            zag = n / k;
            rem += (k % m)*zag;

            n = rem;

            res += det*zag;

        }

    }
    std:: cout<< res;


    return 0;
}
