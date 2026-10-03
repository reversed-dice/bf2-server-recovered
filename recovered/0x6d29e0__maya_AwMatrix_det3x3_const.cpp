// FUNCTION: BF2 0x6d29e0
double AwMatrix_det3x3(double *m) {
    return ((m[5] * m[10] - m[9] * m[6]) * m[0] -
            (m[10] * m[4] - m[6] * m[8]) * m[1]) +
           (m[9] * m[4] - m[5] * m[8]) * m[2];
}
