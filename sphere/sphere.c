#include <stdio.h>
#include <stdlib.h>

int main()
{
    //what is pi lol
    const double pi = 3.14159269359;
    double r;
    int w;

    //radius enter prompt
    printf("enter the radius of the sphere: ");
    scanf("%lf", &r);
    printf("\n");

    //calculations for surface and volume
    double diameter = 2 * r;
    double surface = 4 * pi * r * r;
    double volume = 4.0/3.0 * pi * r * r * r;

    //dialogue and scanning
    printf("would you like the:\n");
    printf("1.) diameter\n");
    printf("2.) surface\n");
    printf("3.) volume\n");
    printf("number: ");
    scanf("%d", &w);
    printf("\n");

    if (w == 1) {
        printf("radius:    %.3f\n", r);
        printf("diameter:  %.3f\n", diameter); 
        printf("\n");
    }

    if (w == 2) {
        printf("radius:    %.3f\n", r);
        printf("surface:   %.3f\n", surface);
        printf("\n");
    }

    if (w == 3) {
        printf("radius:    %.3f\n", r);
        printf("volume:    %.3f\n", volume);
        printf("\n");
    }

    
    return EXIT_SUCCESS;
}