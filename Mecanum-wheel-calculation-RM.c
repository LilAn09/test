#include <stdio.h>

int main() {
    double l=0.4,d=0.1;

    int Vx,Vy,w;

    scanf("%d %d %d", &Vx, &Vy, &w);

    double w1,w2,w3,w4;

    w1=20*Vx+20*Vy-8*w;
    w2=-(-20*Vx+20*Vy+8*w);
    w3=-20*Vx+20*Vy-8*w;
    w4=-(20*Vx+20*Vy+8*w);

    printf("%.6f %.6f %.6f %.6f\n", w1,w2,w3,w4);
    


    return 0;
}