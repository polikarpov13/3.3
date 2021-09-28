#include <iostream>

using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << "X = ";
    cin >> x;

    cout << endl;

    cout << "R = ";
    cin >> R;

    cout << endl;

    if (x < (-1 - R))
        y = -x;
    else
        if ((x > (-1 - R)) && x <= -1)
            y = sqrt(pow(R, 2) - pow((x + 1), 2));
        else
            if ((x > -1) && x <= 1)
                y = R;
            else
                if ((x > 1) && x <= 2)
                    y = R + (-1 - R) * (x - 1);
                else
                    y = -1;

    cout << "Y = " << y << endl;


    system("pause");
    return 0;

}
