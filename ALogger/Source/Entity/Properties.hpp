#pragma once

#include <fstream>
#include <string>
#include <memory>

namespace alog
{

	class Properties
	{
	private:
		std::shared_ptr<std::ostream> entityStream; //stream used by the entity
		std::shared_ptr<std::ostream> outputStream; //stream where the log will appear
		std::string entityName;
		//clock ref
		//thread ref

	public:
		Properties(std::shared_ptr<std::ostream> stream, std::string name);
		~Properties();

		void setEntityStream(std::shared_ptr<std::ostream> newStream);

		void setOutputStream();
		void setOutputStream(std::shared_ptr<std::ostream> outStream);
		std::shared_ptr<std::ostream> getOutputStream();

		void setName(std::string newName);
		std::string getName();
	};

}
