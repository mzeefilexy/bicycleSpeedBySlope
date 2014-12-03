#include <bikeSpeed.h>

double bikeSpeed(float,float);
double kmh;
float power ;/* Power in W */
float slope ; /* slope in % */

int main(void)
{
	printf("Enter power (w) and slope (%%) to calculate the speed (km/h) \n");
	scanf("%f%f", &power, &slope);
	kmh=bikeSpeed(power,slope);
	printf("%f\n", kmh);
	return 1;
};



