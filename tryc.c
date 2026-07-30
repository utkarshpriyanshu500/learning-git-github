#include <stdio.h>
#include <math.h>

int square( int a);
float circle( int a);
int rectangle( int a , int b);
float triangle( int a , int b);

int main() {

    int a , b;

    printf(" ENTER THE  A : ");
    scanf("%d", &a);

    printf(" ENTER THE  B : ");
    scanf("%d", &b);

    int s=square(a);
    printf(" AREA OF SQUARE IS : %d \n", s);

    float c=circle(a);
    printf(" AREA OF CIRCLE IS : %f \n", c);

    int r=rectangle(a,b);
    printf(" AREA OF RECTANGLE IS : %d \n", r);

    float t=triangle(a,b);
    printf(" AREA OF TRIANGLE IS : %f \n", t);

    return 0;
}

int square( int a){
    return a*a;
}

float circle( int a){
    return 3.14*a*a;
}

int rectangle( int a, int b){
    return a*b;
}

float triangle( int a , int b){
    return (a*b)/2.0; 
}