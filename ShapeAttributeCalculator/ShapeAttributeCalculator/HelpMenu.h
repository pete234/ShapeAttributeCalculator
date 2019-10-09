#pragma once
class HelpMenu
{
public:
	HelpMenu();	//Constructor
	~HelpMenu();	//Destructure
private:
	int helpmenuchoice;	//varible declaration
	LoopProgram RunAgain;	//Object instansiation
public:
	void help();	//Method declaration
	void calcHelp();	//Method declaration
	void howHelp();	//Method declaration
};

