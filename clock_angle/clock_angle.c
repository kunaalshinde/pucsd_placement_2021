/* Program to Calculate min angle between hour hand and minute hand of clock */

#include <stdio.h>
#include <stdlib.h>

float minClockAngle(int hour, int min)
{
	if(hour < 0  || min < 0 || hour > 12 || min  > 60)
	{	
		printf("Invalid Input\n");
		return -1.0;
	}
	if(hour == 12)
		hour == 0;
	if(min == 60)
	{
		min = 0;
		hour += 1;
		if(hour > 12)
			hour = hour - 12;
	}

	float h = 0.5 * (hour * 60 + min);
	float m = 6 * min;

	float min_angle = abs(h - m);
	min_angle = ((360 - min_angle) < min_angle) ? (360 - min_angle) : min_angle;
	return min_angle;
}


int main(int argc, char *argv[])
{
	float angle = minClockAngle(atoi(argv[1]), atoi(argv[2]));
	if(angle != -1)
		printf("%.2f\n", angle);
	return 0;
}
