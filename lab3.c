#include <stdio.h>


int main()
{
	int l,w,sa;
	float h;

	l = 2;
	h = 3.5;
	w = 6;
	
	sa = l * w * h;
	


	printf("The area of a cube with length of %d, height of %1.1f, and width of %d is %d", l, h, w, sa);

	getchar();

	return 0;

}