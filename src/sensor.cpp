/**************************************
 * sensor.cpp
 *
 *  Created on: 2018年12月11日
 *      Author: zjt
 *************************************/

#include "sensor.h"

DRV_SENSOR SetAAndB;

bool SetA(DRV_SENSOR & me)
{
	me.m_a = 10;
	me.m_b = 20;
	return 1;
}

bool SetB(DRV_SENSOR & me)
{
	me.m_a = 10;
	me.m_b = 20;
	return 0;
}







