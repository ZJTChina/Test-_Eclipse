/*
 * Stock.cpp
 *
 *  Created on: 2018年12月15日
 *      Author: zjt
 */

#include <Stock.h>

Stock::Stock() {
	// TODO Auto-generated constructor stub
	std::cout << "　请输入构造函数的初始化参数！！！" << std::endl;
}

Stock::Stock(std::string & str1 , std::string & str2 , long & a , double & b)
{
	this->m_name = str1;
	this->m_company = str2;
	this->m_share = a;
	this->m_shareval = b;
	set_tot();
}

bool Stock::set_name(std::string & a)
{
	bool TURE_OR_FALSE = true;
	this->m_name = a;
	return TURE_OR_FALSE;
}

std::string Stock::get_name(void)
{
	return this->m_name;
}

bool Stock::set_company(std::string & a)
{
	bool TURE_OR_FALSE = true;
	this->m_company = a;
	return TURE_OR_FALSE;
}

std::string Stock::get_company(void)
{
	return this->m_company;
}

bool Stock::set_share(long & a)
{
	bool TURE_OR_FALSE = true;
	this->m_share = a;
	return TURE_OR_FALSE;
}

long Stock::get_share(void)
{
	return this->m_share;
}

bool Stock::set_share_val(double & a)
{
	bool TURE_OR_FALSE = true;
	this->m_shareval = a;
	return TURE_OR_FALSE;
}

double Stock::get_share_val(void)
{
	return this->m_shareval;
}

double Stock::get_total_val(void)
{
	set_tot();
	return this->m_totalval;
}

bool Stock::shell(double & val1 , long & val2)
{
	bool TURE_OR_FALSE = true;

	if(m_share > val1)
	{
		std::cout << " Stoch 卖出!!" << std::endl;
	}
	 return TURE_OR_FALSE;
}

bool Stock::buy(double & val1 , long & val2)
{
	bool TURE_OR_FALSE = true;
	if(m_share < val1)
	{
		std::cout << " Stoch 买进!!" << std::endl;
	}
	return TURE_OR_FALSE;
}

Stock::~Stock() {
	// TODO Auto-generated destructor stub
	std::cout << " Stoch 创建的对象已释放!!!" << std::endl;
}

