#pragma once

#include "Core.h"

#include <stdio.h>
#include <memory>

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To Be defined by client
	std::unique_ptr<Application> CreateApplication();
}
