#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern std::unique_ptr<Hazel::Application> Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();

	return 0;
}
#endif
