#include "reader.h"

std::string Reader::ReadFile(std::filesystem::path Path)
{
	if (!std::filesystem::exists(Path))
	{
		ERROR(ErrorCode::FILE_CANNOT_BE_OPENED);
		return "";
	}

	if (std::filesystem::is_directory(Path))
	{
		ERROR(ErrorCode::PATH_IS_NOT_A_FILE);
		return "";
	}

	try
	{
		const auto size = std::filesystem::file_size(Path);
		std::string result(size, ' ');
		std::ifstream stream(Path);
		stream.read(result.data(), size);
		
		return result;
	}
	catch (std::exception e)
	{
		ERROR("Unknown Exception: " << e.what());
		return "";
	}
}
