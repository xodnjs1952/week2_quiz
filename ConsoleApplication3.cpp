#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double square(double min, double max) {
	double temp = (double)rand() / (double)RAND_MAX;

	temp = min + (max - min)*temp;
	return temp;
}

bool getcircle(double x, double y) {
	
	double x_c = 0.5;
	double y_c = 0.5;
	double r = 0.5;
	double circle;
	circle = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r*r;

	if (circle > 0.0) { return false; }
	else { return true; }

}


void main() {
	FILE *of;
	of = fopen("circle.txt", "w");
	srand((unsigned)time(NULL));

	for (int i = 0; i = 10000; i++) {
		double x = square(0.0, 1.0);
		double y = square(0.0, 1.0);
		if (getcircle(x, y) == true) {
			fprintf(of, "%f %f \n", x, y);
		}
		else { continue; }
		
	}

	fclose(of);
}