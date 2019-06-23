#pragma once

#include <vector>
#include "i_node.h"
#include "closed_node.h"
#include "s_closed_node.h"

class XMLTreeFactory
{
private:
public:
	XMLTreeFactory() = default;
	XMLTreeFactory(XMLTreeFactory &) = delete;
	~XMLTreeFactory() = default;

	std::vector<INode *> CreateXML(std::vector<std::string> TokenizedString);

protected:
};
