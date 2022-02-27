/**
 * @file calculator.h
 * @author shashwat
 * @brief this project calculations around various aspects
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//Header Guard
#ifndef CALCULATOR_H_
#define CALCULATOR_H_
//Macro declarartion

//Include files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#define PI 3.14159
//#include<windows.h>

void menu_display();
/**
 * @brief performs addition
 * 
 */
void add();
/**
 * @brief performs subtraction
 * 
 */
void sub();
/**
 * @brief performs multiplication
 * 
 */
void mult();
/**
 * @brief performs division
 * 
 */
void di();
/**
 * @brief returns power of a number
 * 
 */
void po();
/**
 * @brief returns square root of a number
 * 
 */
void sq();
/**
 * @brief calculates factorial of an a number
 * 
 */
void facto();
/**
 * @brief calculates sine value of an angle
 * 
 */
void sini();
/**
 * @brief calculates cosine value of an angle
 * 
 */
void cosi();
/**
 * @brief calculates tangent value of an angle
 * 
 */
void tani();
/**
 * @brief returns sine value of an angle
 * 
 * @return float 
 */
float sine(float , int );
/**
 * @brief returns cosine value of an angle
 * 
 * @return float 
 */
float cosine(float , int );
/**
 * @brief returns factorial of an a number
 * 
 * @param n 
 * @return int 
 */
int factorial(int n);
/**
 * @brief converts binary to decimal
 * 
 */
void BinToDec();
/**
 * @brief converts decimal to binary
 * 
 */
void DecToBin();
/**
 * @brief converts octal to decimal
 * 
 */
void OctalToDec();
/**
 * @brief converts decimal to octal
 * 
 */
void DecToOctal();
/**
 * @brief converts hexadecimal to decimal
 * 
 */
void HexaToDec();
/**
 * @brief converts decimal to hexadecimal
 * 
 */
void DecToHex();
/**
 * @brief returns one's complement
 * 
 */
void onescomplement();
/**
 * @brief returns two's complement
 * 
 */
void twoscomplement();
/**
 * @brief converts binary to gray
 * 
 */
void BinToGray();
/**
 * @brief converts gray to binary
 * 
 */
void GrayToBin();
int bintogray(int);
/**
 * @brief returns AND gate's truth table
 * 
 */
void printANDtable();
/**
 * @brief returns OR gate's truth table
 * 
 */
void printORtable();
/**
 * @brief returns NOT gate's truth table
 * 
 */
void printNOTtable();

#endif