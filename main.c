/*
 * This program is to help the user calculate the area, perimeter or volume of any given basic geometric figure.
 * It will ask the user to tell the program which figure it is he wants to calculate the area and perimeter by using a
 * menu, which will not stop until the calculations are done and the user wishes to exit. Per option there will be three
 * possible figures of which the user may calculate its property.
 *
 * Problem Analysis.
 * Problem: Calculate the area and perimeter of any given figure that the user wishes. Use a different function for
 * each figure, and then display the results.
 *
 * Inputs: Type of figure. Length of height. Length of width. Length of side. Length of radius.
 *
 * Calculations: If a square: Area= pow (b, 2) ; Perimeter= 4b.
 * If a rectangle: Area= b*h ; Perimeter: 2b + 2h
 * If an equilateral triangle: Area = (b*h) / 2 ; Perimeter= 3 * b
 * If a rectangular prism: Volume= w*l*h
 * If a cylinder: Volume= (pi * pow (r,2) ) * h
 *
 * Outputs: Area or Perimeter or Volume of the selected figure.
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 12.09.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <math.h>

//Main Menu Function.
void menu() {

    printf("\nChose an option.\n");
    printf("\nA Perimeter");
    printf("\nB Surface (Area)");
    printf("\nC Volume");
    printf("\nX Exit\n");
    printf("\nWhat do you want to calculate?");
}

//Function for Perimeter
void perimeter() {
    double b;
    double h;
    double s;
    double perimeter;
    int figure;

    printf("1 Rectangle\n");
    printf("2 Square\n");
    printf("3 Equilateral Triangle\n");
    printf("Chose a figure:\n");
    scanf("%i", &figure);

    switch (figure) {
        case 1:
            printf("Give me the length of the base:");
            scanf("%lf", &b);
            printf("Give me the length of the height:");
            scanf("%lf", &h);

            perimeter = (2 * b) + (2 * h);

            printf("The perimeter of the rectangle is %lf units.", perimeter);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 2:
            printf("Give me the length of the size:");
            scanf("%lf", &s);

            perimeter = 4 * s;

            printf("The perimeter of the square is %lf units.", perimeter);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 3:
            printf("Give me the length of the side:");
            scanf("%lf", &s);

            perimeter = 3 * s;

            printf("The perimeter of the equilateral triangle is %lf units", perimeter);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        default:
            printf("The option that you introduce is not valid. Please introduce a valid option.");
    }
}

//Function for the Surface
void surface() {
    double b;
    double h;
    double s;
    double surface;
    int figure;

    printf("1 Rectangle\n");
    printf("2 Square\n");
    printf("3 Equilateral Triangle\n");
    printf("Chose a figure:\n");
    scanf("%i", &figure);

    switch (figure) {
        case 1:
            printf("Give me the length of the base:");
            scanf("%lf", &b);
            printf("Give me the length of the height:");
            scanf("%lf", &h);

            surface = b * h;

            printf("The surface of the rectangle is %lf square units.", surface);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 2:
            printf("Give me the length of the size:");
            scanf("%lf", &s);

            surface = pow(s,2);

            printf("The surface of the square is %lf square units.", surface);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 3:
            printf("Give me the length of the side:");
            scanf("%lf", &s);
            printf("Give me the length of the height:");
            scanf("%lf", &h);

            surface = (b * h)/2;

            printf("The surface of the equilateral triangle is %lf square units.", surface);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        default:
            printf("The option that you introduce is not valid. Please introduce a valid option.");
    }
}

//Function for the Volume
void volume() {
    double l;
    double w;
    double h;
    double s;
    double r;
    const double pi = 3.141516;
    double volume;
    int figure;

    printf("1 Rectangular Prism\n");
    printf("2 Cube\n");
    printf("3 Cylinder\n");
    printf("Chose a figure:\n");
    scanf("%i", &figure);

    switch (figure) {
        case 1:
            printf("Give me the width:");
            scanf("%lf", &w);
            printf("Give me the length:");
            scanf("%lf", &l);
            printf("Give me the height:");
            scanf("%lf", &h);

            volume = w * l * h;

            printf("The volume of the rectangular prism is %lf cubic units.", volume);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 2:
            printf("Give me the length of the side:");
            scanf("%lf", &s);

            volume = pow(s,3);

            printf("The volume of the cube is %lf cubic units.", volume);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        case 3:
            printf("Give me the length of the radius:");
            scanf("%lf", &r);
            printf("Give me the length of the height:");
            scanf("%lf", &h);

            volume = (pi * pow(r,2)) * h;

            printf("The volume of the cylinder is %lf cubic units.", volume);

            printf("\nPress any key to continue.");
            getchar();
            getchar();
            break;
        default:
            printf("The option that you introduced is not valid. Please introduced a valid option.");
    }
}

int main() {
    char option;

    do {
        menu();
        scanf("%c",&option);

        if (option != 'X') {
            switch (option) {
                case 'A':
                    perimeter();
                    break;
                case 'B':
                    surface();
                    break;
                case 'C':
                    volume();
                    break;
                default:
                    printf("The option that you introduced is not valid. Please introduced a valid option.");
            }
        }


    } while (option != 'X');

    printf("You will now exit the program.");

    return 0;
}