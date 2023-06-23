#include <stdio.h>

struct Box {
    
    double length;
    double width;
    double height;
    
};

double calculateVolume(struct Box* boxPtr) {
    
    return boxPtr->length * boxPtr->width * boxPtr->height;
    
}

double calculateSurfaceArea(struct Box* boxPtr) {
    
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    
}

int main() {
    
    struct Box myBox;
    double a, b, c;
    printf ("\enter the length: ");
    scanf ("%lf", &a);
    printf("\nenter the width: ");
    scanf ("%lf", &b);
    printf ("enter the height: ");
    scanf("%lf", &c);
    myBox.length = a;
    myBox.width = b;
    myBox.height = c;
    
    struct Box* boxPtr = &myBox;

    double volume = calculateVolume(&myBox);
    double surfaceArea = calculateSurfaceArea(&myBox);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}