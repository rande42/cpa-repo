#ifndef __CPAFUNCTIONS_H_INCLUDED__   // if x.h hasn't been included yet...
#define __CPAFUNCTIONS_H_INCLUDED__   //   #define this so the compiler knows it has been included

int adder(int eka, int toka);	//Adds

double** prepareTraces(const char tracesFile[], int traceAmount, int sampleAmount);

void freeTraces(double** traces, int traceAmount);

#endif 
