#include <iostream>


int main()
{
    int d, m, y;

    std::cin >> d >> m >> y;
    int max_d;

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            max_d = 30;
        } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            max_d = 31;
        } else {
            max_d = 29;
        }

        if (d == max_d) {
            d = 2;

            if (m == 12)
            {
                m = 1;
                y += 1;
            }
            else
            {
                m +=1;
            }

        }
        else if( d == (max_d - 1))
        {
            d = 1;


            if (m == 12)
            {
                m = 1;
                y += 1;
            }
            else
            {
                m +=1;
            }
        }
        else
        {
           d+=2;
        }

        std::cout<< d << ' ' << m << ' ' << y;

    }
    else
    {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            max_d = 30;
        } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            max_d = 31;
        } else {
            max_d = 28;
        }

        if (d == max_d)
        {
            d = 2;

            if (m == 12)
            {
                m = 1;
                y += 1;
            }
            else
            {
                m +=1;
            }
        }
        else if( d == (max_d -1))
        {
            d = 1;

            if (m == 12)
            {
                m = 1;
                y += 1;
            }
            else
            {
                m +=1;
            }
        }
        else
        {
            d+=2;
        }
        std::cout<< d << ' ' << m << ' ' << y;

    }


    return 0;
}