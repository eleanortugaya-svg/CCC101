# include "stdio.h"

void main() {
    
    int Eleanor;
    float Tugaya;

    printf("Enter two numbers(int float): ");
    scanf("%d %f", &Eleanor, &Tugaya);

    if(Eleanor>0) printf("The number %i is positive.\n", Eleanor);
    else if(Eleanor<0) printf("The number %i is negative.\n", Eleanor);
    else printf("The number %i is zero.\n", Eleanor);

    if(Tugaya>0) printf("The number %f is positive.\n", Tugaya);
    else if(Tugaya<0) printf("The number %f is negative.\n", Tugaya);
    else printf("The number %f is zero.\n", Tugaya);

}