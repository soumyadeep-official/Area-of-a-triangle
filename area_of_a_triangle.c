#include <stdio.h>
int main()
{
    int base,height,area=0;
    printf("Enter your base lenght (in cm): ");
    scanf("%d", &base);
    printf("Enter your height of the triangle: ");
    scanf("%d", &height);
    area= (base*height)/2;
    printf("The area of the triangle is: %d", area);
    return 0;
}