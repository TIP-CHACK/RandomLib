#include "iostream"
#include <chrono>
#include "RandomLib.h"
#include <string>
using namespace std;
using namespace std::chrono;
	int R = 0;
int Rand(int Min,int Max) {
	if (Min = Max) {
		return 0;
	}
	int c;
	int m;
	int x;
	x = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
	m = abs(Min - Max);
	if (R != 0) {
		x = abs(x * R);
	}
	c = abs(m / 2);
	R = abs((x + c) % m);
	R = R + Min;
	return R;
}