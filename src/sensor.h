/*****************************************
 * sensor.h
 *
 *  Created on: 2018年12月11日
 *      Author: zjt
 *******************************************/

#ifndef SENSOR_H_
#define SENSOR_H_

#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

typedef struct
{
	int m_a;
	int m_b;
}DRV_SENSOR;

extern DRV_SENSOR SetAAndB;

extern bool SetA(DRV_SENSOR & me);
extern bool SetB(DRV_SENSOR & me);

#endif /* SENSOR_H_ */
