#include "i_node.h"

INode::~INode()
{
}

void INode::Register(std::pair<const std::string, const std::any> & Attribute)
{
	m_Attributes.emplace(Attribute);
}
