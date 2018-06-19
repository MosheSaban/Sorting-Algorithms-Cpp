#pragma once
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

#ifndef MYFUNC
const int ARRAYSIZE = 10;
void swap(int* a, int* b);
void maxSort(int arr[], int n);
void printArray(int arr[], int size);
void qS(int arr[], int left, int right);
int* getRandomArray(int n);
void bubbleSort(int arr[], int n);
void mergeSort(int arr[], int temp[], int left, int right, int n);
#endif
