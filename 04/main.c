#include <stdio.h>


int main()

{
    int radius;
    printf("Please insert the radius: ");// user prompt
    scanf("%i", &radius); //address of operator 

    double area = 3.14159 * (radius * radius);
    
    //printf("the given area is = %i\n" , area); // i is just for integer numbers
    
    printf("the given area is = %f\n" , area);
    
    return 0;


}