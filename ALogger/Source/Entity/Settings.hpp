#pragma once

namespace alog
{

	class Settings
	{
	public:
		bool useClassStream;
		bool showName;
		bool refreshStream;

	public:
		Settings(bool useClassStream, bool showName);
		~Settings();
	};

}