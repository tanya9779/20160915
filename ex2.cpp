﻿#include <iostream>

void good_incrementor(int *x);
     

int main()
{
        int x = 1;
        std::cout << "x initial: " << x << std::endl;
        good_incrementor(&x);
        std::cout << "x changed: " << x << std::endl;

   std::cin >> x;
        return 0;
}

void good_incrementor(int *x)
{
  (*x)++;  // разыменование  
}     
