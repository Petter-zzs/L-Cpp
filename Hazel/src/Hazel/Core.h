#pragma once

#ifdef LPP_PLATFORM_WINDOWS
	#ifdef LPP_BUDLE_DLL
		#define LPP_API _declspec(dllexport)

	#else
		#define LPP_API _declspec(dllimport)
	#endif // DEBUG
#else

  #error  LPP Only suport Windows

#endif // LPP_WINDOWS

