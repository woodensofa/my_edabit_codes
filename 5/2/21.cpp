//https://edabit.com/challenge/PoSkat7FepavXW49T
#include <math.h>
bool rectangleInCircle(int w, int h, int radius) {
	return (sqrt((w*w)+(h*h))<=radius*2)?true:false;
}
