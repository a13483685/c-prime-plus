/*
 * tv.cpp
 *
 *  Created on: 2018-4-17
 *      Author: xiezheng
 */

#include "tv.h"
#include <iostream>

void Tv::volup()
{
	if(volume < MaxVal)
		volume ++;
	else
		volume = MaxVal;
}

void Tv::voldown()
{
	if(volume > MinVal)
		volume --;
	else
		volume = MinVal;
}

void Tv::chanup()
{
	if(channel < maxchannel)
		channel ++;
	else
		channel = maxchannel;
}

void Tv::chandown()
{
	if(channel > 1)
		channel --;
	else
		channel = 1;
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;
	cout << "Tv is " << (state == Off? "Off":"On") <<endl;
	if(state == On)
	{
		cout << "Volume Setting =  " << volume << endl;
		cout << "Channel Setting =  " << channel << endl;
	}
}
