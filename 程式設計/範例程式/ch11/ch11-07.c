/* 
 * ch11-07.c
 * �C�|���A 
 */
 
#include <stdio.h> 
#include <stdlib.h>

enum color
{
	green,	//�۷��`�� 0 
	yellow,	//�۷��`�� 1 
	red		//�۷��`�� 2 
};

enum model
{
	first,		//�۷��`�� 0 
	five = 5,	//�۷��`�� 5 
	six,		//�۷��`�� 6 
	ten = 10	//�۷��`�� 10 
};

void show_color(enum color c);
void show_model(enum model m);

int main(void)
{

	enum color light = green;
	enum model car = six;
	
	printf("sizeof(light)=%d\n",sizeof(light));

	if (light == green)
		printf("Go!\n");
	else if (light == yellow)
		printf("Causion!\n");
	else if (light == red)
		printf("Stop!\n");
	
	show_color(light);
	
	show_model(car);
	
	system("pause");
	return 0;
}

void show_color(enum color c)
{
	printf("The color of the light is %d\n",c);
}

void show_model(enum model m)
{
	printf("The model of the car is %d\n",m);
}
