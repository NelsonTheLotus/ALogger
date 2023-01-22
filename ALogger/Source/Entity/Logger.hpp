#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#include "Properties.hpp"
#include "Settings.hpp"

namespace alog
{

	class Logger
	{
	private:
		Properties entityProps;
		Settings entitySets;

	public:
		Logger
		(
			std::string name							= "default", 
			std::shared_ptr<std::ostream> outputStream	= std::shared_ptr<std::ostream>(&std::cout), 
			bool useClassStream							= false, 
			bool showName								= true
		);
		
		~Logger();

		void log(std::string message);

		//void info(std::string message);
		//void warn(std::string message);
		//void critical(std::string message);
		//void fatal(std::string message);
	};

}