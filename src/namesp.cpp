/*
 * namesp.cpp
 *
 *  Created on: 2018年12月12日
 *      Author: zjt
 */

#include "namesp.h"

namespace Sp_name{

	using std::cin;
	using std::cout;
	using std::endl;

	void GetName(St_name & St1)
	{
        cout << "Please Input your FirstName ：" << endl;
        cin >> St1.S_FirstName;
        cout << "Please Input your LastName ：" << endl;
        cin >> St1.S_LastName;
	}

	void ShowName(St_name & St2)
	{
		cout << "FirstName is : " << St2.S_FirstName << "  LastName is :  " << St2.S_LastName << endl;
	}
}


namespace Sp_Message{

	void GetMessage(St_message & me1)
	{
		GetName(me1.name);
		cout << "Please Input Money : " << endl;
		cin >> me1.money;
	}

	void ShowMessage(St_message & me2)
	{
		ShowName(me2.name);
		cout << " He has Money is : " << me2.money << endl;
	}

	int SumMessage(const St_message ar[] , int n)
	{
		int i,sum = 0;
		for(i = 0 ; i < n ;i ++)
		{
			sum += ar[i].money ;
		}
		return sum;
	}
}




