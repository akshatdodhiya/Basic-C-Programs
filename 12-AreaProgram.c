#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14f

float getAreaCircle();
float getAreaRectangle();
float getAreaSquare();
float getAreaTriangle();


int main()
{
    int choice, valid;

    do
    {
        printf("Area of:\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Square\n");
        printf("4. Triangle\n");

        printf("Enter your choice: ");
        valid = scanf("%d", &choice);
    }
    while (!valid || choice < 1 || choice > 4);

    switch (choice)
    {
        case 1:
            printf("Area of circle is %.2f\n", getAreaCircle());
            break;
        case 2:
            printf("Area of rectangle is %.2f\n", getAreaRectangle());
            break;
        case 3:
            printf("Area of square is %.2f\n", getAreaSquare());
            break;
        case 4:
            printf("Area of triangle is %.2f\n", getAreaTriangle());
            break;
        default:
            break;
    }

    system("pause");
    return 0;
}

float getAreaCircle()
{
    float radius, valid;
    do
    {
        printf("Enter the radius of the circle: ");
        valid = scanf("%f", &radius);
    } while (!valid || radius < 0);

    return (float)(PI * pow(radius, 2));
}

float getAreaRectangle()
{
    float length, width, valid;
    do
    {
        printf("Enter the length of the rectangle: ");
        valid = scanf("%f", &length);
    } while (!valid || length < 0);

    do
    {
        printf("Enter the width of the rectangle: ");
        valid = scanf("%f", &width);
    } while (!valid || width < 0);

    return (length * width);
}

float getAreaSquare()
{
    float side, valid;
    do
    {
        printf("Enter the side of the square: ");
        valid = scanf("%f", &side);
    } while (!valid || side < 0);

    return (float)(pow(side, 2));
}

float getAreaTriangle()
{
    float base, height, valid;
    do
    {
        printf("Enter the base of the triangle: ");
        valid = scanf("%f", &base);
    } while (!valid || base < 0);

    do
    {
        printf("Enter the height of the triangle: ");
        valid = scanf("%f", &height);
    } while (!valid || height < 0);

    return (float)(0.5f * base * height);
}