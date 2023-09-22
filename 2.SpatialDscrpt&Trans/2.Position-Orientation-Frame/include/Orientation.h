#ifndef ORIENTATION_H
#define ORIENTATION_H

// Rotation Matrix
double r11, r12, r13, r21, r22, r23, r31, r32, r33;

double R[3][3] = {
    r11, r12, r13, 
    r21, r22, r23, 
    r31, r32, r33};

struct unit_vec_t{
    double x[3];
    double y[3];
    double z[3];
}A, B;

double dotproduct(unit_vec_t a, unit_vec_t b);
double R_AB[3][3] = {
    dotproduct(B.x,A.x), dotproduct(B.y,A.x), dotproduct(B.z,A.x),
    dotproduct(B.x,A.y), dotproduct(B.y,A.y), dotproduct(B.z,A.y),
    dotproduct(B.x,A.y), dotproduct(B.y,A.y), dotproduct(B.z,A.y)
};

#endif // ORIENTATION_H