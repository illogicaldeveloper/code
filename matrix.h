
float matPoint[] = { 0, 0, 0, 0 };

float identity[] = {
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1
};
float matAnswer[] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0
};

float matClear(float matrix[]) {
    for (int i=0; i<16; i++) {
        matrix[i] = 0;
    }
}
float matAdd(float one[], float two[]) {
    for (int i=0; i<16; i++) {
        matAnswer[i] = one[i] + two[i];
    }
}
float matSub(float one[], float two[]) {
    for (int i=0; i<16; i++) {
        matAnswer[i] = one[i] - two[i];
    }
}
float pointMul( float point[], float matrix[] ) {
     for (int i=0; i<4; i++) {
        matPoint[i] = point[i] * matrix[i];
        matPoint[i] += point[i] * matrix[i+4];
        matPoint[i] += point[i] * matrix[i+8];
        matPoint[i] += point[i] * matrix[i+12];         
     }
}