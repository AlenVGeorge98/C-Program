/**
* @file calculator.h
*
*/
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

/**
* Calculates the sum of two integer number
* @param[in] number1
* @param[in] number2
* @return sum of two numbers
* @note function pointers are used to pass values to function.
*/
int add(int number1, int number2); ///<Funtion to calculate the sum
/**
* Calculates the difference of two integer number
* @param[in] number1
* @param[in] number2
* @return difference of two numbers
* @note function pointers are used to pass values to function.
*/
int substract(int number1, int number2); ///<Funtion to calculate the difference
int(*fptr1)(int,int); ///<Function pointer to add()
int(*fptr2)(int,int); ///<Function pointer to substract()


#endif
