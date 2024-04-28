#include <iostream>
// #include <vector>
// #include <string>
#include "helloworld.h"



template<typename T>

  void calc(T x, T y, T z)
  {
        T add = x + y + z;
        T sub = x - y - z;
        T multi = x * y * z;
        double div = static_cast<double>(x) / static_cast<double>(y);

        std::cout << "x + y =" << add << std::endl;
        std::cout << "x - y =" << sub << std::endl;
        std::cout << "x * y =" << multi << std::endl;
        std::cout << "x / y =" << div << std::endl;
    };

// void calc(int x, int y)
//   {
//         int add = x + y;
//         int sub = x - y;
//         int multi = x * y;
//         double div = static_cast<double>(x) / static_cast<double>(y);

//         std::cout << "x + y =" << add << std::endl;
//         std::cout << "x - y =" << sub << std::endl;
//         std::cout << "x * y =" << multi << std::endl;
//         std::cout << "x / y =" << div << std::endl;
//     }

// void calc(double x, double y)
//   {
//         double add = x + y;
//         double sub = x - y;
//         double multi = x * y;
//         double div = static_cast<double>(x) / static_cast<double>(y);

//         std::cout << "x + y =" << add << std::endl;
//         std::cout << "x - y =" << sub << std::endl;
//         std::cout << "x * y =" << multi << std::endl;
//         std::cout << "x / y =" << div << std::endl;
//     }


    int main()
    {
      
        calc(5,6);
        calc(7,8);
        calc(9,10);
        calc(4.5, 5.6);

        return 0;
    }

// int main()
// {
//   { int x = 5;
//     int y = 6;
//     int add = x + y;
//     int sub = x - y;
//     int multi = x * y;
//     double div = static_cast<double>(x) / static_cast<double>(y);

//     std::cout << "x + y =" << add << std::endl;
//     std::cout << "x - y =" << sub << std::endl;
//     std::cout << "x * y =" << multi << std::endl;
//     std::cout << "x / y =" << div << std::endl;
//   }

//      {
//         int x = 7;
//         int y = 8;
//         int add = x + y;
//         int sub = x - y;
//         int multi = x * y;
//         double div = static_cast<double>(x) / static_cast<double>(y);

//         std::cout << "x + y =" << add << std::endl;
//         std::cout << "x - y =" << sub << std::endl;
//         std::cout << "x * y =" << multi << std::endl;
//         std::cout << "x / y =" << div << std::endl;
//     }
// }