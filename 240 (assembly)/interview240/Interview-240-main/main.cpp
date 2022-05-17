/*
;********************************************************************************************
; Program name:          King of Assembly                                                   *
; Programming Language:  x86 Assembly                                                       *
; Program Description:   This program interviews various people                             *
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
;   Program name: King of Assembly                                                          *
;   Programming languages: One module in c++                                                *
;   Files in this program: interview.asm csmajor.txt social.txt chris.txt                   *
;                                                                                           *
;********************************************************************************************
; This File                                                                                 *
;    Name:      main.cpp                                                                    *
;    Purpose:   To call the interview.asm file and interview the person                     *
;                                                                                           *
;********************************************************************************************
*/
#include <cstring>
#include <iomanip>
#include <iostream>

extern "C" double interview( char[], double );

int main()
{
  double offer = -999;
  char name[100];
  double salary;

  std::cout << "Welcome to Software Analysis by Paramount Programmers, Inc.\n";
  std::cout << "Please enter your first and last names and press enter: ";

  std::cin.getline( name, sizeof( name ) );    // Get the interviewed first and lastname

  std::cout << "Thank you " << name << ". Our records show that you applied for employment her with our agency a week ago.\n";
  std::cout << "Please enter your expected annual salary when employed at Paramount: ";

  std::cin >> salary;

  std::cout << "Your interview with Ms Linda Fenster, Personnel Manager, will begin shortly.\n";

  offer = interview( name, salary );    // Get the interviewed offer

  if( offer < 50000 )    // offer < 50k
  {
    std::cout << "Hello " << name << " I am the receptionist\n";
    std::cout << "We have an opening for you in the company cafeteria for $" << std::fixed << std::setprecision( 2 ) << offer << " annually\n";
    std::cout << "Take your time to let us know your decision.\n";
    std::cout << "Bye\n";
  }
  else if( offer < 100000 )    // 50k <= offer < 100k
  {
    std::cout << "Hello " << name << " I am the receptionist\n";
    std::cout << "This envelope contains your job offer with starting salary $" << std::fixed << std::setprecision( 2 ) << offer << ".  Please check back on Monday morning at 8am.\n";
    std::cout << "Bye\n";
  }
  else    // offer >= 100k
  {
    std::cout << "Hello Mr Sawyer. I am the receptionist.\n";
    std::cout << "This envelope has your job offer starting at $" << std::fixed << std::setprecision( 2 ) << offer << " annual. Please start any time you like. In the middle time our CTO wishes to have dinner with you.\n";
    std::cout << "Have very nice evening Mr Sawyer\n";
  }
  return 0;
}
