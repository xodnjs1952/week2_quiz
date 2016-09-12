//dumbel
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double square(double min, double max) {
	double temp = (double)rand() / (double)RAND_MAX;

	temp = min + (max - min)*temp;
	return temp;
}

bool getcircle1(double x, double y) {

	double x_c = 0.5;
	double y_c = 0.5;
	double r = 0.5;
	double circle;
	circle = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r*r;

	if (circle > 0.0) { return false; }
	else { return true; }

}

bool getcircle2(double x, double y) {

	double x_c = 3.5;
	double y_c = 0.5;
	double r = 0.5;
	double circle;
	circle = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r*r;

	if (circle > 0.0) { return false; }
	else { return true; }

}


void main() {
	FILE *of1;
	of1 = fopen("circle1.txt", "w");
	srand((unsigned)time(NULL));

	for (int i = 0; i = 10000; i++) {
		//żř1
		double x1 = square(0.0, 1.0);
		double y1 = square(0.0, 1.0);
		//żř2
		double x2 = square(3.0, 4.0);
		double y2 = square(0.0, 1.0);
		//źŐŔâŔĚ
		double x3 = square(0.5, 3.5);
		double y3 = square(0.4, 0.6);
		
		fprintf(of1, "%f %f \n", x3, y3);//źŐŔâŔĚ
		if ((getcircle1(x1, y1) == true)) {
			fprintf(of1, "%f %f \n", x1, y1);//żř1
		}
		if ((getcircle2(x2, y2) == true)) {
			fprintf(of1, "%f %f \n", x2, y2);//żř2
		}
		else { continue; }




	}
	fclose(of1);
}
