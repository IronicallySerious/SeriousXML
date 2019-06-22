#include "node.h"

Node::~Node()
{
	for (auto &item : m_Children)
	{
		delete item;
	}
}

void Node::Register(const Node & Child)
{
	m_Children.push_back(&Child);
}

void Node::Register(std::pair<const std::string, const std::any> & Attribute)
{
	m_Attributes.emplace(Attribute);
}
