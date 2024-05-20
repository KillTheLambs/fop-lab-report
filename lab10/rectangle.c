#include <stdio.h>

typedef struct {
    int length;
    int width;
} Rect;

void CalculateArea(Rect rect);
void CalculatePerimeter(Rect rect);

int main(){
    Rect rect1;
    rect1.length = 10;
    rect1.width = 5;
    printf("Enter Length:");
    scanf("%d", &rect1.length);
    printf("Enter Width:");
    scanf("%d", &rect1.width);
    CalculateArea(rect1);
    CalculatePerimeter(rect1);
}

void CalculateArea(Rect rect){
    int area = rect.length * rect.width;
    printf("Area: %d\n", area);
}

void CalculatePerimeter(Rect rect){
    int perimeter = 2 * (rect.length + rect.width);
    printf("Perimeter: %d\n", perimeter);
}