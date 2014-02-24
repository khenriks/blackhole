#ifndef SPECT_H
#define SPECT_H

#include <fftw3.h>
#define N 32  //N.B. N+1 is the number of data points. N should probably be a power of two. at the very least, even.

/*
typedef struct dplan{
  double * yin; //input
  double * yout; //output
  fftw_plan p[2]; //plans for transforming
} dplan;

typedef struct flyplan{
  double * y;
  fftw_plan p;
  int n;
} flyplan;

void mkwi();

void plddx(dplan *);
void plint(dplan *);
void exddx(dplan *);
void exintl(dplan *, double);
void exintr(dplan *, double);
//void exint(dplan *);

void plfly(flyplan *);
void exfly(flyplan *,double,double);
*/
void spectSetup(double);

//void plddxm();
//void plintm();

void ddxm(double *, double *);
void intm(double *, double *);

//void plrebase(double);
void rebasem(double *);

#endif
