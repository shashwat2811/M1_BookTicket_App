//Header Guard
#ifndef CALCULATOR_H_
#define CALCULATOR_H_
//Macro declarartion

//Include files
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#define PI 3.14159
//#include<windows.h>

void menu_display();

void add();
void sub();
void mult();
void di();
void po();
void sq();
void facto();
void sini();
void cosi();
void tani();
float sine(float , int );
float cosine(float , int );
int factorial(int n);
void BinToDec();
void DecToBin();
void OctalToDec();
void DecToOctal();
void HexaToDec();   
void DecToHex();
void onescomplement();
void twoscomplement();
void BinToGray();
void GrayToBin();
int bintogray(int);
void printANDtable();
void printORtable();
void printNOTtable();

#endif