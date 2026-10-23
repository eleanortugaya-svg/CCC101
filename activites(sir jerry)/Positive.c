#include "stdio.h"

void main() {
    
    int Eleanor;
    float Tugaya;

    printf("Enter two number(int float): ");
    scanf("%i %f", &Eleanor, &Tugaya);

    if(Eleanor>0) printf("The number %i is positive.\n", Eleanor);
    else if(Eleanor<0) printf("The number %i is negative.\n", Eleanor);
    else printf("The number %i is neutral.\n", Eleanor);

    if(Tugaya>0) printf("The number %f is positive.\n", Tugaya);
    else if(Tugaya<0) printf("The number %f is negative.\n", Tugaya);
    else printf("The number %f is neutral.\n", Tugaya);

}