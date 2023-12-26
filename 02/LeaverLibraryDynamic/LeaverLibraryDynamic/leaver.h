#pragma once

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVER_LIB_API __declspec(dllexport)
#else
#define LEAVER_LIB_API __declspec(dllimport)
#endif

#include <string>

class Leaver {
public:
	Leaver() = default;

	LEAVER_LIB_API std::string leave(std::string name);
};
