#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

char buf1[]="abcdefghij";
char buf2[]="ABCDEFGHIJ";

int main(void){
	int fd;
	if((fd=creat("file.hole",File_MODE)<0){
		err_sys("creat error");
	if((write(fd,buf1,10)!=10)
		err_sys("
