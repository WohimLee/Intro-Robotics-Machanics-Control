

#include <math.h>
#include "atan2.h"

double my_atan2(double y, double x) {
    const double PI = 3.14159265358979323846;

    if (x > 0) {
        return atan(y / x);
    } else if (y >= 0 > x) {
        return atan(y / x) + PI;
    } else if (y < 0 < x) {
        return atan(y / x) + 2 * PI;
    } else if (y < 0 > x) {
        return atan(y / x) - PI;
    } else if (x == 0 && y != 0) {
        return PI / 2;
    } else {
        // x and y are 0, the result is undefined
        return 0; 
    }
}


