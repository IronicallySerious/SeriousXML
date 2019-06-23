#include "main.h"
#include "reader.h"
#include "xml_tokenizer.h"
#include "xml_tree_factory.h"

int main()
{
	Reader MyReader;
	std::string Raw = MyReader.ReadFile("D:\\CPP Projects\\SeriousXML\\SeriousXML\\src\\eg\\simple.xml");

	XMLTokenizer MyTokenizer;
	std::vector<std::string> TokenizedXML = MyTokenizer.Tokenize(Raw);

	XMLTreeFactory MyXMLTreeFactory;
	std::vector<INode *> XML = MyXMLTreeFactory.CreateTree(TokenizedXML);

	return 0;
}
