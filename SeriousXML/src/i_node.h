#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <any>

class INode
{
private:

public:
	INode(std::string Name);
	~INode();

	void Register(std::pair<const std::string, const std::any> & Attribute);

	inline const std::unordered_map<std::string, std::any> & GetAttributes() const { return m_Attributes; }

protected:
	std::string m_Name;
	std::unordered_map<std::string, std::any> m_Attributes;
};
