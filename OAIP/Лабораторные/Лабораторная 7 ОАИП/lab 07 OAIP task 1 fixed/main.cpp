#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float b = 0.5, m = 8, a = 20, y, z, j = 2;
    while (j <= 3)
    {

        y = (m - b) / (sin(a) - exp(a));
        z = 3 * y + sqrt(a - 4 * j * b);
        cout << "y = " << y << "\t" << "z = " << z << endl;
ww        j += 0.5;
    }
    return 0;
}
