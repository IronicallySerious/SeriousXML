#pragma once

#include <vector>
#include <unordered_map>
#include <any>

class INode
{
private:

public:
	INode() = default;
	~INode();

	void Register(std::pair<const std::string, const std::any> & Attribute);

	inline const std::unordered_map<std::string, std::any> & GetAttributes() const { return m_Attributes; }

protected:
	std::unordered_map<std::string, std::any> m_Attributes;
};
