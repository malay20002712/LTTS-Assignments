#include <stdio.h>
#include <math.h>

double find_distance(double x1, double y1, double x2, double y2) {
    
    double distance = sqrt(pow((x1 - x2), 2) - pow((y2 - y1), 2));
    return distance;
    
}

int main() {
    
  double x1, y1, x2, y2;
  double distance;

  printf("Enter the x-coordinate of the first point: ");
  scanf("%lf", &x1);
  printf("Enter the y-coordinate of the first point: ");
  scanf("%lf", &y1);
  printf("Enter the x-coordinate of the second point: ");
  scanf("%lf", &x2);
  printf("Enter the y-coordinate of the second point: ");
  scanf("%lf", &y2);

  distance = find_distance(x1, x2, y1, y2);

  printf("The distance between the two points is: %.2f\n", distance);

  return 0;
  
}