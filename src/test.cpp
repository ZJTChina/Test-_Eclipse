//============================================================================
// Name        : test.cpp
// Author      : ZJT
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "sensor.h"
#include "namesp.h"
#include "Stock.h"

using namespace std;

void display(int& a , int& b);
void display(int& a , int& b , int& c);
void other(void);
void another(void);

int main()
{
	string str1;
	ifstream fin;
	ofstream fout;

	{

		Stock  class1;

	}

	int a1 = 10 , a2 = 20 , a3 = 30;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	display(a1 , a2);
	display(a1 , a2 , a3);

	other();
	another();

	return 0;
}

void display(int& a , int& b)
{
	cout << " please look a = " <<  a << " b = " << b << endl ;
}


void display(int& a , int& b , int& c)
{
	cout << " please look a = " <<  a << " b = " << b << " c = " << c << endl ;
}

void other(void)
{

	using std::cin;
	using std::cout;
	using namespace Sp_Message;
	int i = 0;

	St_message ZJT = { {"zhang" , "jitao"} , 24 };
	Sp_Message::ShowMessage(ZJT);
	St_message St_mess[3];
	for(i = 0;i < 3 ; i ++)
	{
		Sp_Message::GetMessage(St_mess[i]);
	}
	for(i = 0;i < 3;i ++)
	{
		Sp_Message::ShowMessage(St_mess[i]);
	}
	cout << endl;
	cout << "the Sum = " << Sp_Message::SumMessage(St_mess , 3) << endl;
}


void another(void)
{
	using Sp_name::St_name;
	St_name ZJT = {"zhang" , "JiTao"};
	Sp_name::ShowName(ZJT);
}

