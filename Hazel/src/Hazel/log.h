#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace  LPP{

	class LPP_API Log {
	public:
		static void init();
		static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_core_log_; }
		static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_client_log_; }

	private:
		static std::shared_ptr<spdlog::logger> s_core_log_;
		static std::shared_ptr <spdlog::logger> s_client_log_;
	};
}

#define LPP_CORE_ERROR(...) ::LPP::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LPP_CORE_INFO(...) ::LPP::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LPP_CORE_WARN(...) ::LPP::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LPP_CORE_TRACE(...) ::LPP::Log::GetCoreLogger()->trace(__VA_ARGS__)


#define LPP_CLIENT_ERROR(...) ::LPP::Log::GetClientLogger()->error(__VA_ARGS__)
#define LPP_CLIENT_INFO(...) ::LPP::Log::GetClientLogger()->info(__VA_ARGS__)
#define LPP_CLIENT_WARN(...) ::LPP::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LPP_CLIENT_TRACE(...) ::LPP::Log::GetClientLogger()->trace(__VA_ARGS__)