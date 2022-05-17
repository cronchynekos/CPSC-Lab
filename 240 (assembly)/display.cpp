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
;    Name:      display.cpp                                                                 *
;    Purpose:   To print out all the integers in the array                                  *
;                                                                                           *
;********************************************************************************************
*/
#include <stdio.h>

extern "C" void display_array(double array[], long index);

void display_array(double array[], long index)
{
    for (long i = 0; i < index; ++i)//loops until every input gets printed
    {
        printf("%1.8f", array[i]);
        printf("%s", " ");
        printf("\n");
    }
}