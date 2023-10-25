#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(double vi, double vf, double vm, double a, double d);

void main(void)
{
	double v_initial, v_final, v_max, accelation, distance = 0;

	printf("출발 속도를 입력하시오(m/s) : ");
	scanf("%lf", &v_initial);

	printf("도착 속도를 입력하시오(m/s) : ");
	scanf("%lf", &v_final);

	printf("최고 속도를 입력하시오(m/s) : ");
	scanf("%lf", &v_max);

	printf("최고 가속도&감속도를 입력하시오(m/s^2) : ");
	scanf("%lf", &accelation);

	printf("총 거리를 입력하시오(m) : ");
	scanf("%lf", &distance);

	func(v_initial, v_final, v_max, accelation, distance);
}

void func(double vi, double vf, double vm, double a, double d)
{
	double tr, ts, tf = 0;
	double dr, ds, df = 0;

	tr = vm / a;						// Rising Time
	ts = d / vm - vm / a;				// Steady Time
	tf = vm / a;						// Falling Time

	dr = tr * vm / 2;					// Distance of Rising
	ds = ts * vm;						// Distance of Steady
	df = tf * vm / 2;					// Distance of Falling

	double i;							// 0.1초씩 증가하는 time

	// 0.1초당 속도값과 이동거리 출력
	for (i = 0; i < tf + ts + tf; i += 0.1)
	{
		if (i < tr)
		{
			printf("%.2lfsec : %.2lfm/s, %.2lfm\n", i, a * i, a * i * i / 2);
		}
		else if (i < tr + ts)
		{
			printf("%.2lfsec : %.2lfm/s, %.2lfm\n", i, vm, dr + (i - tr) * vm);
		}
		else
		{
			printf("%.2lfsec : %.2lfm/s, %.2lfm\n", i, a * (tr + ts + tf - i), dr + ds + df - a * (tr + ts + tf - i) * (tr + ts + tf - i) / 2);
		}
	}

	// 최단 시간 출력 
	printf("tr=%.2fsec ts=%.2fsec tf=%.2fsec shortest time=%.2fsec\n", tr, ts, tf, tr + ts + tf);
}
