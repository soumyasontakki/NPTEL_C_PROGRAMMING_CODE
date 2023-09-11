//To check three point are collinear

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates of three points:\n");
    printf("Point 1 (x1 y1): \n");
    scanf("%f %f", &x1, &y1);
    printf("Point 2 (x2 y2): \n");
    scanf("%f %f", &x2, &y2);
    printf("Point 3 (x3 y3): \n");
    scanf("%f %f", &x3, &y3);

    // Calculate slopes
    float slope1_2 = (y2 - y1) / (x2 - x1);
    float slope1_3 = (y3 - y1) / (x3 - x1);

    // Check if slopes are equal (collinear) or not
    if (slope1_2 == slope1_3) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}






