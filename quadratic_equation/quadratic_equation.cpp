#include "quar.h"
#include <math.h>
#include <iostream>

void quadratic_equation (double a, double b, double c)
{
    const double four = 4;
    const double two = 2;
    double one_res = 0;
    double two_res = 0;
    double dis = 0;
    dis = (b * b) - four * a * c;

    if (dis > 0)
    {
      one_res = (-b + sqrt(dis)) / (two * a);
      two_res = (-b - sqrt(dis)) / (two * a);

    }
    else if (dis == 0)
    {
        one_res = (-b + sqrt(dis)) / (two * a);
    }
    else
    {

    }

}
