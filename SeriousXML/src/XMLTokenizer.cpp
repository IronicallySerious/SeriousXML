#include "XMLTokenizer.h"
#include <vector>

std::vector<std::string> XMLTokenizer::Tokenize(std::string Raw)
{
	std::vector<std::string> Tokens;

	for (std::string::iterator ch = Raw.begin(); ch != Raw.end(); (ch != Raw.end()) ? ch++ : ch)
	{
		std::string Token("");

		if ((*ch == '\n') || (*ch == ' '))
		{
			continue; 
		}

		if (*ch == '<')
		{
			while (*ch != '>')
			{
				Token.push_back(*ch);
				
				if (ch == Raw.end())
				{
					break;
				}
				ch++;
			}
			Token.push_back(*ch++);
			Tokens.push_back(Token);
		}
		else
		{
			while (ch != Raw.end() && *ch != '<')
			{
				if (*ch == '\n')
				{
					ch++;
					continue;
				}

				Token.push_back(*ch);
				
				if (ch == Raw.end())
				{
					break;
				}
				ch++;
			}
			Tokens.push_back(Token);
		}
	}

	return Tokens;
}
