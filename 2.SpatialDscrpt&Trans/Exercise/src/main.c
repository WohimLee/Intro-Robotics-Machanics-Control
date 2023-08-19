
#include <stdio.h>
#include "functions.h"




int main(int argc, char** argv) {
    double y = 1.0;
    double x = 0.0;
    
    double result = my_atan2(y, x);
    printf("Result: %f\n", result); // Should print 1.570796
}