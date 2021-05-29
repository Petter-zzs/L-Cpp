#pragma once

#ifdef  LPP_PLATFORM_WINDOWS

extern LPP::Application* LPP::createApplication();

int main(int argc, char** argv)
{
	auto app = LPP::createApplication();
	app->Run();
	delete app;
}

#endif //  LPP_PLATFORM_WINDOWS

