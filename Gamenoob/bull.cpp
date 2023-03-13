#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float g = 0.5;
	float X = 800, Y = 600;
	float radius = 20;
	float bx = 100, Vy = 0;
	initgraph(800, 600);
#if 0 //µôÂä
	float by = 100;
	while (1) {
		Vy += g;
		by += Vy;
		if (by >= Y - radius) {
			Vy = -0.95 * Vy;
		}
		if (by > Y - radius) by = Y - radius;

		cleardevice();
		fillcircle(bx, by, radius);
		Sleep(50);
	}
#endif
#if 0 //just jump like a fool
	float by = Y - radius;
	while (1) {
		if (kbhit()) {
			char input = _getch();
			if (input == ' ') {
				Vy = -20;
			}
		}
		else if (by >= Y - radius) {
			Vy = 0;
			by = Y - radius;

		}
		Vy += g;
		by += Vy;
		cleardevice();
		fillcircle(bx, by, radius);
		Sleep(10);
	}
	closegraph();
#endif
#if 1 //Ìø¹ý·½¿é
	float RecH = 100, width = 20, RecL = X / 3 * 2, RecVx = -2;

	float by = Y - radius;
	while (1) {
		if (kbhit()) {
			char input = _getch();
			if (input == ' ') {
				Vy = -17;
			}
		}
		else if (by >= Y - radius) {
			Vy = 0;
			by = Y - radius;

		}

		Vy += g;
		by += Vy;
		RecL += RecVx;

		if (RecL <= 0) RecL = X * 2 / 3, RecH = rand() % int(Y / 5) + Y / 5, RecVx = rand() / float(RAND_MAX) - 4;
		cleardevice();
		//fillcircle(bx, by, radius);
		//fillrectangle(RecL, Y - RecH, RecL + width, Y);
		Sleep(10);
	}
	closegraph();
#endif
	return 0;
}