//Определение функций.

#include "Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

Parser::Parser() //Конструктор Parser
{
	cout << "Конструктор Parser" << endl;
}
	
Parser::~Parser() //Диструктор Parser
{
	cout << "Диструктор Parser" << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

IntNumParser::IntNumParser() //Конструктор IntNumParser
{
	cout << "Конструктор IntNumParser" << endl;
}
	
IntNumParser::~IntNumParser() //Диструктор IntNumParser
{
	cout << "Диструктор IntNumParser" << endl;
}

bool IntNumParser::parser(istream& istr)
{
	char buffer[30];
	istr >> buffer;
	
	for(const char* it = buffer; *it; ++it)
	{
		if(!isdigit(*it))
		{
			return false;
		}
		
		int n = strlen(buffer);
		
		for(int i=0; i < n; ++i)
		{
			if(!isdigit(buffer[i]))
			{
				return false;
			}

		}

	}
	
	return true;
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

IdParser::IdParser() //Конструктор IdParser
{
	cout << "Конструктор IdParser" << endl;
}
	
IdParser::~IdParser() //Диструктор IdParser
{
	cout << "Диструктор IdParser" << endl;
}

bool IdParser::parser(istream& istr)
{
	char buffer[30];
	istr >> buffer;
	
	const char * it = buffer;
	
		if(!isalpha(*it++))
		{
			return false;
		}
		
		for( ; *it; ++it)
		{
			if(!isalnum(*it))
			{
				return false;
			}
		}
	
	return true;
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////

StrParser::StrParser() //Конструктор StrParser
{
	cout << "Конструктор StrParser" << endl;
}
	
StrParser::~StrParser() //Диструктор StrParser
{
	cout << "Диструктор StrParser" << endl;
}

bool StrParser::parser(istream& istr)
{
	char buffer[30];
	istr >> buffer;
	
	const char * it = buffer;
	
		if(!isalpha(*it++))
		{
			return true;
		}
		
		for( ; *it; ++it)
		{
			if(!isalnum(*it))
			{
				return false;
			}

		}
	
	return true;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////

OpParser::OpParser() //Конструктор OpParser
{
	cout << "Конструктор OpParser" << endl;
}
	
OpParser::~OpParser() //Диструктор OpParser
{
	cout << "Диструктор OpParser" << endl;
}

bool OpParser::parser(istream& istr)
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////////

CombiParser::CombiParser() //Конструктор CombiParser (без параметров)
{
	cout << "Конструктор CombiParser" << endl;
}

CombiParser::CombiParser(int num, ...) //Конструктор CombiParser (с параметрами)
{
	cout << "Конструктор CombiParser (с параметрами)" << endl;
}
	
CombiParser::~CombiParser() //Диструктор CombiParser
{
	cout << "Диструктор CombiParser" << endl;
}

bool CombiParser::parser(istream& istr)
{
	/*
	for(Item* it = list; *it; it = it -> next)
	{
		
		if(!it->parser(istr))
		{
			return false;
		}
		
	}
	*/
	
	
	return true;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////

