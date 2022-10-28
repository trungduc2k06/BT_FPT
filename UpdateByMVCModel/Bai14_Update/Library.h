#ifndef _LIBRABY_H_
#define _LIBRABY_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

enum SinhVienType
{
	t_good = 1,
	t_normal,
};

#define headNumberPhone {"090", "098", "091", "031", "035" , "038"}

#endif 