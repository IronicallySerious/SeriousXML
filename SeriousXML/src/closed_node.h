#pragma once

#include "i_node.h"

class ClosedNode : public INode
{
private:
	std::vector<INode *> m_Children;

public:
	ClosedNode(std::string Name);
	ClosedNode(ClosedNode &) = default;
	~ClosedNode() = default;

	inline std::vector<INode *> GetChildren() const { return m_Children; }

protected:
};
