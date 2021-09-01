#include <stdio.h>
#include <conio.h>
int main() {
    double length, width, height, volume;

    printf("Enter length, width, and height integers:\n");


    // reads and stores input
    scanf_s("%lf %lf %lf", &length, &width, &height);

    volume = length * width * height; 
    printf("              %.2lf          \n", width);
    printf("       +--------------+      \n");
    printf("      /|             /|      \n");
    printf("     / |            / |      \n");
    printf("    *--+-----------*  |      \n");
    printf("    |  |           |  | %.2lf\n", height);
    printf("    |  |           |  |      \n");
    printf("    |  |           |  |      \n");
    printf("    |  +-----------+--+      \n");
    printf("    | /            | /       \n");
    printf("    |/             |/        \n");
    printf("    *--------------*         \n");
    printf("          %.2lf              \n", length);
    printf("\n");
    printf("Volume of the cube is %.2lf\n \n", volume);
    printf("Press Any Key to Continue");
    _getch(); 
    

    return 0;
}
