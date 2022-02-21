#include <stdio.h>


int main()

{
    int eggs;
    printf("The number of eggs for the day: ");
    scanf("%i", &eggs);  

    double dozen = (double) eggs / 12 ; // dozen is 12
    // If we dont use double before eggs, the result will not be true 
    
    printf("You have %f dozen eggs.\n" , dozen);
    
    return 0;


}