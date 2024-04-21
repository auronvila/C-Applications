#include <stdio.h>

int main() {
    double width;
    double height;

    printf("Welcome to the calculator of area and perimeter in C\n");
    printf("Enter a width: ");
    if (scanf("%lf", &width) != 1) {
        printf("Error: You must enter a number.\n");
        return 1;
    }
    printf("Enter a height: ");
    if (scanf("%lf", &height) != 1) {
        printf("Error: You must enter a number.\n");
        return 1;
    }

    double area = width * height;
    double perimeter = 2.0 * (width + height);

    printf("The area of the rectangle with the height of %lf and width of %lf is: %lf\n", width, height, area);
    printf("The perimeter of the rectangle is: %lf\n", perimeter);

    return 0;
}
