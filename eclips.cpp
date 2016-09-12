#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double square(double min, double max) {
	double temp = (double)rand() / (double)RAND_MAX;

	temp = min + (max - min)*temp;
	return temp;
}

bool getcircle(double x, double y) {

	double xa = 0.3;
	double yb = 0.5;
	double eclips;
	eclips = ((x-0.3)*(x-0.3)) / (xa*xa) + ((y-0.5)*(y-0.5)) / (yb*yb) - 1;

	if (eclips > 0.0) { return false; }
	else { return true; }

}


void main() {
	FILE *of;
	of = fopen("eclips.txt", "w");
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