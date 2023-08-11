#include <iostream>
#include <math.h>

using namespace std;

double Square (int a, int b, int c) {
    return pow ((a+b+c), 2);
}

double Square (double a, double b) {
    return pow ((a+b), 3);
}

double Square (float a, float b, float c, float d) {
    return pow((a+b+c+d), 2);
}

int main()
{
    double square;
    square = Square(3, 4, 5);
    cout<<"Output: " << square << endl;
    square = Square (2.3, 1.4);
    cout << "Output 2: " << square << endl;
    square = Square (1.2, 1.4, 4.5, 6.1);
    cout << "Output 3: " << square << endl;

    return 0;
}
