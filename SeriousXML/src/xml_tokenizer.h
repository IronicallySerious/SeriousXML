#pragma once

#include <vector>
#include "i_node.h"

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
