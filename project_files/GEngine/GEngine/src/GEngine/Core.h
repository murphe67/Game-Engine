#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GENGINE_API __declspec(dllexport)
	#else
		#define GENGINE_API __declspec(dllimport)
	#endif
#else
	#error GEngine only supports windows
#endif

#ifdef GE_ENABLE_ASSERTS
	#define GE_ASSERT(x, ...) {if(!x) {GE_ERROR("Assertion Failed: {0}", __VA__ARGS__); __debugbreak(); } }
	#define GE_CORE_ASSERT(x, ...) {if(!x) {GE_CORE_ERROR("Assertion Failed: {0}", __VA__ARGS__); __debugbreak(); } }
#else
	#define GE_ASSERT(x, ...)
	#define GE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define GE_BIND_EVENT_FN(x) std::bind(&x, this, std::placeholders::_1)