﻿#include"Header.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main() 
{
	int l=0, k=0;
	int n = 0;
	raz(n);
	int* arr;
	arr = memory( n);
	fillArray(arr, n);
	//printf("\033[033marray is\033[0m\n");
<<<<<<< HEAD
//printArray(arr, n);
	//reverse(arr, n);
=======
//	printArray(arr, n);
	reverse(arr, n);
>>>>>>> main
	//printf("\033[033mreversed array is\033[0m \n");
	//printArray(arr, n);
	clock_t start, stop;
	bubbleSort(arr, n, start, stop);
	//printArray(arr, n);
	printf("\033[095mtime for buble sort %d mseconds\033[0m\n", (stop - start) );

	sortShell(arr, n, start, stop);
	//printArray(arr, n);
	printf("\033[095mtime for shell sort %d mseconds\033[0m\n", (stop - start) );
<<<<<<< HEAD
	//qsort1(arr, l, k);
	//printArray(arr, n);
=======
>>>>>>> main
	free(arr);
	return 0;
}