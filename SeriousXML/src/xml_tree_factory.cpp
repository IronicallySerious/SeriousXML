#include "xml_tree_factory.h"

std::vector<INode *> XMLTreeFactory::CreateXML(std::vector<std::string> TokenizedString)
{
	std::vector<INode *> Tree;

	TokenizedString.front();

	ClosedNode Root();


	ClosedNode CurrentRoot;
	for (std::vector<std::string>::iterator Token = TokenizedString.begin(); Token != TokenizedString.end(); Token++)
	{
		if (Token->front() == '<')
		{
			Root
		}
	}
}
