#ifndef TMULT_H
#define TMULT_H

typedef struct {
    double matrix[4][4];
} frame;

void TMULT(frame* A, frame* B, frame* res) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            res->matrix[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                res->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
            }
        }
    }
}


void check(frame* A, frame* B){
    double err = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            err += (A->matrix[i][j] - B->matrix[i][j]);
        }
    }
    printf("Error between the two matrix: %f\n", err);
}

#endif // TMULT_H