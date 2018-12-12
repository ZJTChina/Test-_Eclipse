/********************************
 * namesp.h
 *
 *  Created on: 2018年12月12日
 *      Author: zjt
 *
 *******************************/

#ifndef NAMESP_H_
#define NAMESP_H_

#include "iostream"
#include "fstream"
#include "string"

namespace  Sp_name {

	using std::string;

	typedef struct {

		string  S_LastName;
		string  S_FirstName;

	}St_name;

	void GetName(St_name & St1);
	void ShowName(St_name & St2);

}

namespace Sp_Message{

	using namespace Sp_name;

	typedef struct {

		St_name name;
		int money;

	}St_message;

	void GetMessage(St_message &);
	void ShowMessage(St_message &);
	int SumMessage(const St_message ar[] , int n);
}


#endif /* NAMESP_H_ */

