#pragma once

#include <string>

namespace alog
{

	class Config
	{
	public:
		std::string message;
		std::weak_ptr<std::ostream> outputStream;
		//level
		//class
		//showName
		//Frame*

	public: 
		Config();
		~Config();
	};

}