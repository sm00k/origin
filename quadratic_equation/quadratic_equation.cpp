#include <math.h>
#include <iostream>

using namespace std;

void quadratic_equation (double *pa, double *pb, double *pc)
{
    const double four = 4;
    const double two = 2;

    double dis = 0;
    dis = (*pb * *pb) - four * *pa * *pc;

    if (dis > 0)
    {
      *pc = (-*pb + sqrt(dis)) / (two * *pa);
      *pb = (-*pb - sqrt(dis)) / (two * *pa);

    }
    else if (dis == 0)
    {
        *pc = (-*pb + sqrt(dis)) / (two * *pa);
    }
    else
    {
        cout << "the equation has no roots\n";
    }

}
