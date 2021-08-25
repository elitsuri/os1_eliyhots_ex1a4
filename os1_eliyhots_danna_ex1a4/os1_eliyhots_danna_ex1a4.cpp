/*
* ex1.c - Third child
*
*  Created on: Nov 5, 2017
*      Author: eliyho tsuri ,dan narkisi
*       Login: eliyhots, danna
*
* On this file the third boy and Grill is looking for him in the
* serial search, finally the kid prints what the average time it
* took him to find the number of specialties in numbers
*/
// --------------------- Include Section -----------------------
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdbool.h>
#include <time.h>
#include <process.h>
#include <Windows.h>
// ------------------------- Define ----------------------------
#define SIZE 100
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
// ------------------------ Prototype --------------------------
void transfer (char **argv, int my_array[]);
void serial_search (int my_array[]);
// -------------------------- Main -----------------------------
int main (int argc, char *argv[])
{
	int my_array[SIZE];
	int min = SIZE;
	int max = 0;

	transfer (argv, my_array);
	serial_search (my_array);
	return (EXIT_SUCCESS);
}
// ----------------------- transfer ----------------------------
/*
* The function getting the argv and empty array ,the function
* transfer all the numbers from the argv to the array for the child's
*/
void transfer (char **argv, int my_array[])
{
	int index;
	for (index = 0; index < SIZE; index++)
		my_array[index] = atoi (argv[index]);
}
// ---------------------- serial_search ------------------------
/*
* this function getting int array, rand number,and search number on the
* array, the function print how long it took him find the wanted number
*/
void serial_search (int my_array[])
{
	time_t start, end;
	int index;
	int average = 0;
	bool found = false;

	int wanted = rand () % SIZE;

	start = time (NULL);
	for (index = 0; index < SIZE; index++)
	{
		if (my_array[index] == wanted)
		{
			found = true;
			break;
		}
	}
	end = time (NULL);
	average += (int)end - (int)start;
	printf ("Serial Search: %d\n", (average / SIZE));
}