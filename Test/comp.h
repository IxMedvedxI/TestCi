#pragma once

struct Comp;

typedef struct Comp Comp;

Comp* create(float x, float y);
Comp* sum(Comp* ch1, Comp* ch2); 
Comp* razn(Comp* ch1, Comp* ch2); 
Comp* umn(Comp* ch1, Comp* ch2);
Comp* del(Comp* ch1, Comp* ch2);
float modul(Comp* ch);
float arg(Comp* ch);
void printC(Comp* ch);