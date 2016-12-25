#include <conio.h>
#include <stdlib.h>
 
int main()
{

 char menuchoice;
	int numchoice;


start:
	std::cout<<"\n*------Exploration------*  	   "<<std::endl;
	std::cout<<"\n\nBy: Seth Canonigo\nVersion: Alpha Cookie Dough"<<std::endl;

	std::cout<<"\n[S]tart\n[H]elp\n[Q]uit"<<std::endl;
	std::cin >> menuchoice;

	if(menuchoice=='h'){
		std::cout<<"\nWelcome to Exploration\nThe game only has one purpose: to explore.\nThere are four main commands in the game: inspect, talk, continue, back, and sometimes take.\nYou will fight creatures, discover mysteries, and find treasure.\nNever capitalize the letters. Only use letters that correspond to the action.\n*HINT* Try to inspect your surrounding once in a while.\n"<<std::endl;
		system("Pause");
		goto start;
	}else if(menuchoice=='q'){
		std::cout<<"\nWell..."<<std::endl;
		system("Pause");
		exit(0);

	}else if(menuchoice=='s'){
		goto selection;
	}
	else
	{
		std::cout<<"\nThat was not an option."<<std::endl;
		system("Pause");
		goto start;
	}
 
selection:
std::playerArea[6]={"","","","","",""};
    char name[50];
    std::cout << "Recall your name: " << std::endl;
    std::cin.getline(name, 50);
    std::cout << name << " woke up "<<playerArea[0] << std::endl;
    std::cout << "\n----------------------Press any key to continue----------------------" << std::endl;
    _getch();
    return 0;
}
