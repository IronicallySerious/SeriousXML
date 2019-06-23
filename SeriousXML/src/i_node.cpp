#include "i_node.h"

INode::INode(std::string Name)
	: m_Name(Name)
{
}

INode::~INode()
{
}

void INode::Register(std::pair<const std::string, const std::any> & Attribute)
{
	m_Attributes.emplace(Attribute);
}
