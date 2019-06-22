#pragma once

#include "i_node.h"

class SelfClosedNode : public INode
{
private:

public:
	SelfClosedNode() = default;
	SelfClosedNode(SelfClosedNode &) = default;
	~SelfClosedNode() = default;

protected:
};
