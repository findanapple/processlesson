#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/wait.h>

int block(const char * SFILE,int pronum);
int check_arg(const char * SFILE,int arg_num,int pronum);
int procreate(const char * SFILE,const char * DFILE,int pronum, int blocksize);
