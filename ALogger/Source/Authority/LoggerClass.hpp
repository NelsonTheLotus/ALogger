#pragma once

#include <iostream>

#include "Authority.hpp"

namespace alog
{

	template<class logClear>
	class LoggerClass : public Authority
	{
	public:
		static std::shared_ptr<std::ostream> classStream;
		//clearFrame - static 

	public:
		LoggerClass()
		{
			return;
		}

		~LoggerClass()
		{
			return;
		}

		void setSharedStream(std::shared_ptr<std::ostream> newStream)
		{
			classStream = newStream;
			return;
		}
		void logMessage(std::string message, Properties* entProps, Settings* entSets)
		{
			std::cout << message << std::endl;
			//config to frame
		}

		std::string getClearName();
	};

}