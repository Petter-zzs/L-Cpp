#pragma once

#ifdef  LPP_PLATFORM_WINDOWS

extern LPP::Application* LPP::createApplication();

int main(int argc, char** argv)
{
	LPP::Log::init();
	//LPP::Log::GetCoreLogger()->warn("hellow word");
	//LPP::Log::GetClientLogger()->error("bad");
	LPP_CORE_INFO("hellow word");
	LPP_CLIENT_ERROR("Bad");
	auto app = LPP::createApplication();
	app->Run();
	delete app;
}

#endif //  LPP_PLATFORM_WINDOWS

