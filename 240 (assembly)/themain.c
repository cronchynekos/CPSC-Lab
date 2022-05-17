/*
;********************************************************************************************
; Program name:          Sum of an Array Calculator                                         *
; Programming Language:  x86 Assembly                                                       *
; Program Description:   This program adds all the inputs from a user and outputs the sum   *
;                                                                                           *
;********************************************************************************************
; Author Information:                                                                       *
; Name:         Nathanael Kim                                                               *
; Email:        nathan.kim@csu.fullerton.edu                                                *
; Institution:  California State University - Fullerton                                     *
; Course:       CPSC 240-05 Assembly Language                                               *
;                                                                                           *
;********************************************************************************************
; Copyright (C) 2021 Nathanael Kim                                                          *
; This program is free software: you can redistribute it and/or modify it under the terms   *
; of the GNU General Public License version 3 as published by the Free Software Foundation. *
; This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY  *
; without even the implied Warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. *
; See the GNU General Public License for more details. A copy of the GNU General Public     *
; License v3 is available here:  <https://www.gnu.org/licenses/>.                           *
;                                                                                           *
;********************************************************************************************
; Program information                                                                       *
;   Program name: Sum of an Array Calculator                                                *
;   Programming languages: One module in C, Four modules in X86, One modules in c++         *
;   Files in this program: control.asm fill.asm sum.asm main.c display.cpp                  *
;                                                                                           *
;********************************************************************************************
; This File                                                                                 *
;    Name:      main.c                                                                      *
;    Purpose:   To call the control.asm file and take the sum                               *
;                                                                                           *
;********************************************************************************************
*/
#include <stdio.h>
#include <stdint.h>

extern double _control();
extern double _fill();
extern double _sum();

int main(int argc, char* argv[]){
double answer = 0.0;
	printf("======================================================\n");//opening prompt
	printf("Welcome to Sum of an Array Calculator by Nathanael Kim\n");

	answer = _control();//calls to asm file

	printf("The Main received %5.8lf and decided to keep it.\n", answer);//ending prompt
  printf("Thank you for using High Speed Array Software.\n");
  printf("For system support contact Nathanael Kim at nathan.kim@csu.fullerton.edu.\n");
	printf("Main will return 0 to the operating system.\n");
	return 0;
}
