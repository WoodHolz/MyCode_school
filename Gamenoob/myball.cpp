#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float g = 0.58;
	float X = 800, Y = 600;
	float radius = 20;
	float bx = 100, Vy = 0;
	initgraph(800, 600);
#if 0 //掉落
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
		Sleep(10);
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
#if 1 //跳过方块
	float RecH = 100, width = 20, RecL = X / 3 * 2, RecVx = -2;
	float by = Y - radius;
	int jumpnum = 2; //跳跃次数
	int point = 0;
	while (1) {
		
		if (_kbhit()) {
			char input = _getch();
			if (input == ' ' && (jumpnum == 1 || jumpnum == 2)) {
				if (jumpnum == 2) Vy = -14.5; //一段跳
				else if (jumpnum == 1) Vy = -12.5; //二段跳
				jumpnum --; //每次跳跃后计数减1
			}
		}
		else if (by >= Y - radius) {
			Vy = 0;
			by = Y - radius;
			jumpnum = 2;
		}

		Vy += g; 
		by += Vy;
		RecL += RecVx;
		if (RecL <= bx + radius && RecL + width >= bx - radius && Y - RecH <= by + radius) {
			point = 0;//clear your score
			return 0; //end the game
		}
		if (RecL <= 0)
			RecL = X * 4 / 3, RecH = rand() % int(Y / 4) + Y / 5, RecVx = rand() / float(RAND_MAX) - 4, point++;
		cleardevice();
		fillcircle(bx, by, radius);
		fillrectangle(RecL, Y - RecH, RecL + width, Y);
		TCHAR a[20]; //define a string
		swprintf_s(a, _T("你的得分:%d"), point);
		settextcolor(BLUE);
		settextstyle(40  , 0, _T("微软雅黑"));
		outtextxy(50, 30, a);
		Sleep(10);
	}
	closegraph();
#endif
#if 0 //抛物线运动
	float Vx = 4; //横向速度
	float by = 100; //高度
	while (1) {
		Vy += g;
		by += Vy;
		bx += Vx;
		if (by >= Y - radius) {
			by = Y - radius;
			Vy = -0.95 * Vy; //反弹
		}
		//if (by > Y - radius) by = Y - radius;

		if (bx >= X - radius) {
			bx = X - radius;
			Vx = -0.95 * Vx; //反弹
		}
		if (bx <= radius) {
			bx = radius;
			Vx = -0.95 * Vx; //反弹
		}
			cleardevice();
			
			fillcircle(bx, by, radius);
			Sleep(10);
		
	}
	closegraph();
#endif
	return 0;
}