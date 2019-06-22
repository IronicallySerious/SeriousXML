#pragma once

#include <vector>
#include <unordered_map>
#include <any>

class Node
{
private:
	std::vector<const Node *> m_Children;
	std::unordered_map<std::string, std::any> m_Attributes;

public:
	Node() = default;
	~Node();

	void Register(const Node & Child);
	void Register(std::pair<const std::string, const std::any> & Attribute);

	inline std::vector<const Node *> GetChildren() const { return m_Children; }
	inline const std::unordered_map<std::string, std::any> & GetAttributes() const { return m_Attributes; }

protected:
};
