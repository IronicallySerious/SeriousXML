#pragma once

#include <fstream>
#include <filesystem>
#include <string>

#include "log.h"

class Reader
{
private:
public:
	Reader() = default;
	~Reader() = default;
	Reader(Reader &) = delete;
	Reader & operator=(Reader &) = delete;

	std::string ReadFile(std::filesystem::path Path);

protected:
};
