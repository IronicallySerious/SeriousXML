#pragma once

#include <vector>

class XMLTokenizer
{
private:
public:
	XMLTokenizer() = default;
	XMLTokenizer(XMLTokenizer &) = delete;
	~XMLTokenizer() = default;

	std::vector<std::string> Tokenize(std::string Raw);

protected:
};
