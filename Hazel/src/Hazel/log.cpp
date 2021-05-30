#include "log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace LPP {

	std::shared_ptr<spdlog::logger> Log::s_client_log_;
	std::shared_ptr<spdlog::logger> Log::s_core_log_;

	void Log::init() {
		spdlog::set_pattern("%^[%T] %n:%v%$");
		s_core_log_ = spdlog::stdout_color_mt("HAZEL");
		s_core_log_->set_level(spdlog::level::trace);

		s_client_log_ = spdlog::stdout_color_mt("APP");
		s_client_log_->set_level(spdlog::level::trace);
	}
}