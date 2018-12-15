/*
 * Stock.h
 *
 *  Created on: 2018年12月15日
 *      Author: zjt
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <string>
#include <iostream>

class Stock {

	private:
				std::string m_name;
				std::string m_company;
				long m_share;
				double m_shareval;
				double m_totalval;
				void set_tot() {m_totalval = m_share * m_shareval ;};
	public:
				Stock();
				Stock(std::string & str1 , std::string & str2 , long & a , double & b);
				bool set_name(std::string & a);
				std::string  get_name(void);
				bool set_company(std::string & a);
				std::string  get_company(void);
				bool set_share(long & a);
				long get_share(void);
				bool set_share_val(double & a);
				double get_share_val(void);
				double get_total_val(void);
				bool shell(double & val1 , long & val2);
				bool buy(double & val1 , long & val2);

				~Stock();
};

#endif /* STOCK_H_ */
