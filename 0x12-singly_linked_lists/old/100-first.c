#include<stdio.h>

/**
 * myStartupFun - Apply the constructor
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - impl of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
