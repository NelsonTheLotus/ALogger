#include "Settings.hpp"

namespace alog
{
	Settings::Settings
	(
		bool useClassStream, 
		bool showName,
		bool showClear
	):
		useClassStream(useClassStream), 
		showName(showName), 
		showClear(showClear),
		refreshStream(false)
	{
		return;
	}

	Settings::~Settings()
	{
		return;
	}
}