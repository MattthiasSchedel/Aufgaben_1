#pragma once

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <sstream>

class xmas_object
{
public:
	enum {socks, dog, smartphone, SHIT};

	std::vector <std::string> names = { "socks", "dog", "smartphone", "LEGO(r)" };
	std::vector <int> presents;

	void do_something();
};
