// ex06_16.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write statements that assign random integers to the variable n in the
following ranges:
a) 1 ≤n ≤2
b) 1 ≤n ≤100
c) 0 ≤n ≤9
d) 1000 ≤n ≤1112
e) –1 ≤n ≤1
f) –3 ≤n ≤11
*/

n = 1 + rand() % 2;
n = 1 + rand() % 100;
n = rand() % 10;
n = 1000 + rand() % 113;
n = -1 + rand() % 3;
n = -3 + rand() % 15;