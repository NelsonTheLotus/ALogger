#include "../../ALogger/Source/ALogger.hpp"

#include <iostream>
#include <fstream>

int main()
{
	auto newLogger = alog::Logger();
	newLogger.signIn(alog::clearance::system);

	newLogger.log("hello");

	
	return 0;
}