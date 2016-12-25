#include <conio.h>
#include <stdlib.h>
 
int main()
{

std::playerArea[6]{"","","","","",""}



    char name[50];
    std::cout << "Recall your name: " << std::endl;
    std::cin.getline(name, 50);
    std::cout << name << " woke up "<<playerArea[0] << std::endl;
    std::cout << "\n----------------------Press any key to continue----------------------" << std::endl;
    _getch();
    return 0;
}
