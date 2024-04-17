#include <iostream>
#include <cmath>

int main()
{
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    int difx = std:: abs(x1-x2);
    int dify = std:: abs(y1-y2);

    if(x1 == x2 || y1 == y2 ||difx == dify)
    {
        std:: cout<< "Yes";
    }
    else
    {
        std:: cout<< "No";
    }



    return 0;
}




