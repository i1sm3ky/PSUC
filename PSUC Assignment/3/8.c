#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
    char color[10];
    double price;
};

void main() {
    struct Box b1, b2;

    printf("Enter Length, Width, Height, Price, Color of box 1: ");
    scanf("%lf, %lf, %lf, %lf, %s", &b1.length, &b1.width, &b1.height, &b1.price, &b1.color);
    scanf("%c", &b2.color);
    printf("Enter Length, Width, Height, Price, Color of box 2: ");
    scanf("%lf, %lf, %lf, %lf, %s", &b2.length, &b2.width, &b2.height, &b2.price, &b2.color);

    printf("Properties of box 1:\nLength: %lf\nWidth: %lf\nHeight: %lf\nPrice: %lf\nColor: %s\n\n", b1.length, b1.width, b1.height, b1.price, b1.color);
    printf("Properties of box 2:\nLength: %lf\nWidth: %lf\nHeight: %lf\nPrice: %lf\nColor: %s\n\n", b2.length, b2.width, b2.height, b2.price, b2.color);
}