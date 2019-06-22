#include "XMLTokenizer.h"

#include <stack>

std::vector<std::string> XMLTokenizer::Tokenize(std::string Raw)
{
	std::stack<std::string> Tokens;

	bool TextScope = false;
	bool BracketScopeEnable = false;

	for (std::string::iterator ch = Raw.begin(); ch != Raw.end(); ch++)
	{
		BracketScopeEnable =
			(*ch == '<') ?
			true : (*ch == '>') ?
			false : false;


		if (BracketScopeEnable == true)
	}

	return std::vector<std::string>();
}
