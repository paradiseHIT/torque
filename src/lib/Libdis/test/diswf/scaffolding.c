#include "license_pbs.h" /* See here for the software license */
#include <stdlib.h>
#include <stdio.h>

unsigned dis_dmx10 = 0;
double *dis_dp10 = NULL;
double *dis_dn10 = NULL;

int tcp_puts(int fd, const char *str, size_t ct)
  {
  fprintf(stderr, "The call to tcp_puts needs to be mocked!!\n");
  exit(1);
  }

int tcp_wcommit(int fd, int commit_flag)
  {
  fprintf(stderr, "The call to tcp_wcommit needs to be mocked!!\n");
  exit(1);
  }

double disp10d_(int expon)
  {
  fprintf(stderr, "The call to disp10d_ needs to be mocked!!\n");
  exit(1);
  }

char *discui_(char *cp, unsigned value, unsigned *ndigs)
  {
  fprintf(stderr, "The call to discui_ needs to be mocked!!\n");
  exit(1);
  }

void disi10d_(void)
  {
  fprintf(stderr, "The call to disi10d_ needs to be mocked!!\n");
  exit(1);
  }

int diswsi(int stream, int value)
  {
  fprintf(stderr, "The call to diswsi needs to be mocked!!\n");
  exit(1);
  }
