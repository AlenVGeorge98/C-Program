#include<stdio.h>

int add(int number1, int number2){
    return number1+number2;
}
int(*fptr1)(int,int)=add;

int substract(int number1, int number2){
    return number1-number2;


}
int(*fptr2)(int,int)=substract;
