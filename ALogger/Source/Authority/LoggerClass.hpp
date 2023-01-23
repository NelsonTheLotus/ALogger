#pragma once

#include "Authority.hpp"

namespace alog
{

	template<class logClear>
	class LoggerClass : public Authority
	{
	public:
		static std::shared_ptr<std::ostream> clearStream;
		//clearFrame - static

	public:
		LoggerClass(std::shared_ptr<std::ostream> classStream);
		~LoggerClass();

		void setSharedStream(std::shared_ptr<std::ostream> newStream);
		void logMessage(std::string message, Properties entProps, Settings entSets);
		std::string getClearName();
	};

}