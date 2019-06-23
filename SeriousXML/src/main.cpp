#include "main.h"
#include "reader.h"
#include "XMLTokenizer.h"

int main()
{
	Reader MyReader;
	std::string Raw = MyReader.ReadFile("D:\\CPP Projects\\SeriousXML\\SeriousXML\\src\\eg\\simple.xml");

	XMLTokenizer MyTokenizer;
	MyTokenizer.Tokenize(Raw);

	return 0;
}
