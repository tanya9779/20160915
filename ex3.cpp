#include <iostream>
// using namespace std;


void good_incrementor(int &x);
     

int main()
{
        int y = 1;
        std::cout << "x initial: " << y << std::endl;
        good_incrementor(y);
        std::cout << "x changed: " << y << std::endl;

        return 0;
}

void good_incrementor(int &x) // параметр передается по ссылке
{
  x++; // обращаться по адресу не нужно   
}     
