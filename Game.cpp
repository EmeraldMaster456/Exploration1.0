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
std::openning1[4]={"With the fields stretching behind me,","As the sun scorch my back,","After the long departure of a friend,","Glancing over my map,"};
std::oppening2[4]={"I said my goodbyes to my guide,","I allowed fate to guide me,","I gazed at the darkness ahead,","I began my journey,"};
std::oppening3[4]={"As I swore a victorous return.","As I saw shadows ahead.","As I held my hat against the wind.","As I felt a terrible chill gone down my spine."};
std::oppening4[6]={"Silence.","Echo is my name.","I am Sorrow.","I, Love, will find her.","Rage will conquer all.","Will the Great Explorer."};
std::playerName[6]={"Silence","Echo","Sorrow","Love","Rage","Will"};
std::playerArea[6]={"in a moist cave.","in a forest opening.","in a place tainted with bones.","in a place that feels almost alive.","in a dark castle.","in a "};
    std::cout << PlayerName[0] << " woke up "<<playerArea[0] << std::endl;
    std::cout << "\n----------------------Press any key to continue----------------------" << std::endl;
    _getch();
    return 0;
}
