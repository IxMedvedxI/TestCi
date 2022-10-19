#include "comp.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float pi = 3.1415;

struct Comp
{
	float x;
	float y;
};

struct Comp* create(float x1, float y1) {
	Comp* ch = (Comp*)malloc(sizeof(Comp));
	ch->x = x1;
	ch->y = y1;
	return ch;
}

Comp* sum(Comp* ch1,Comp* ch2) {
	Comp* ch = (Comp*)malloc(sizeof(Comp));
	ch->x =ch1->x + ch2->x;
	ch->y =ch1->y + ch2->y;
	return ch;
}
Comp* razn(Comp* ch1, Comp* ch2) {
	Comp* ch = (Comp*)malloc(sizeof(Comp));
	ch->x = ch1->x - ch2->x;
	ch->y = ch1->y - ch2->y;
	return ch;
}
Comp* umn(Comp* ch1, Comp* ch2) {
	Comp* ch = (Comp*)malloc(sizeof(Comp));
	float x1 = ch1->x;
	float y1 = ch1->y;
	float x2 = ch2->x;
	float y2 = ch2->y;
	ch->x = x1 * x2 - y1 * y2;
	ch->y =y1 * x2 + y2 * x1;
	return ch;
}
Comp* del(Comp* ch1, Comp* ch2) {
	Comp* ch = (Comp*)malloc(sizeof(Comp));
	float x1 = ch1->x;
	float y1 = ch1->y;
	float x2 = ch2->x;
	float y2 = ch2->y;
	ch->x = (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2);
	ch->y = (x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2);
	return ch;
}

float modul(Comp* ch) {
	float x1 = ch->x;
	float y1 = ch->y;
	return sqrt(x1 * x1 + y1 * y1);
}
float arg(Comp* ch) {
	float x1 = ch->x;
	float y1 = ch->y;
	return 180/pi * atan(y1 / x1);
}
void printC(Comp* ch) {
	printf(" %.2f + %.2fi ",ch->x,ch->y);
}
