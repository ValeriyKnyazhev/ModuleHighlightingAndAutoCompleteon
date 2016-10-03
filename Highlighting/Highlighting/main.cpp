#include <iostream>
#include <string>
#include <vector>
#include "Tokenizer.h"
#include <unordered_set>
#include <vector>
#include "Highlighting.h"
#include "IdentifierParser.h"
#include "TestIdentifier.h"
using namespace Yapynb;

using namespace Yapynb;

int main() {
	std::string text(
		std::istreambuf_iterator<char>(std::cin),
		std::istreambuf_iterator<char>()
	);

	CPythonTokenizer tokenizer(text);
	auto tokens = tokenizer.Tokenize();
	for (auto tok : tokens) {
		std::cout << tok.Text << std::endl;
	}

	//Highlighting Highlighting("keywords.config");
	//Highlighting.HighlightText("test.txt");
	
	std::cout << ((testIdentifiers1() == true) ? "Test is successfull completed.\n" : "Test is failed.\n");

	return 0;
}