#ifndef __FIR_H__
#define __FIR_H__

#define N 5

int taps[N] = {0,-10,-9,23,56};
int inputbuffer[N];
int inputsignal[N] = {1,2,3,4,5};
int outputsignal[N];
#endif
