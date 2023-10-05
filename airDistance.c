#include <stdio.h>
#include <math.h>

int main() {

    double latitudeA, longitudeA, latitudeB, longitudeB;
    const double PI = 3.1415; 
    const int R = 6371;

    printf("Enter the longitude of location A: ");
    scanf("%lf", &longitudeA);
    double longitudeA_Rad = longitudeA / 180.0 * PI;
    printf("Enter the latitude of location A: ");
    scanf("%lf", &latitudeA);
    double latitudeA_Rad = latitudeA / 180.0 * PI;

    printf("Enter the longitude of location B: ");
    scanf("%lf", &longitudeB);
    double longitudeB_Rad = longitudeB / 180.0 * PI;
    printf("Enter the latitude of location B: ");
    scanf("%lf", &latitudeB);
    double latitudeB_Rad = latitudeB / 180.0 * PI;

    double delta = longitudeB_Rad - longitudeA_Rad;
    double d = R * acos(sin(latitudeA_Rad) * sin(latitudeB_Rad) + cos(latitudeA_Rad) * cos(latitudeB_Rad) * cos(delta));

    printf("Location Distance\n");
    printf("============================\n");
    printf("Origin:\t(%lf, %lf)\n", latitudeA,  longitudeA);
    printf("Destination:\t(%lf, %lf)\n",latitudeB ,longitudeB );
    printf("Air Distance is %lf kms\n", d);
}
