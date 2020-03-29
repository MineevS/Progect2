//Объявление функций.

//#pragma once
#ifndef HEADER_H
#define HEADER_H

	#include <iostream>
	#include <cctype>
	#include <cstring> //strlen();
	#include "Header.h"

	using namespace std;

	class Parser
	{
		private: //Данные.

		protected:
		
		public: //Методы.
	
			Parser(); //Конструктор

		   ~Parser(); //Диструктор
		   
		    virtual bool parser(istream&) = 0;
	};
	
	class IntNumParser : public Parser
	{
		private: //Данные.

		protected:
		
		public: //Методы.
	
			IntNumParser(); //Конструктор

		   ~IntNumParser(); //Диструктор
		   
		    bool parser(istream& istr);
	};
	
	class IdParser : public Parser
	{
		private: //Данные.

		protected:
		
		public: //Методы.
	
			IdParser(); //Конструктор

		   ~IdParser(); //Диструктор
		   
		    bool parser(istream& istr);
	};
	
	class StrParser : public Parser
	{
		private: //Данные.

		protected:
		
		public: //Методы.
	
			StrParser(); //Конструктор

		   ~StrParser(); //Диструктор
		   
		    bool parser(istream& istr);
	};
	
	class OpParser : public Parser // Для операциий + - * / и т. д.
	{
		private: //Данные.

		protected:
		
		public: //Методы.
	
			OpParser(); //Конструктор

		   ~OpParser(); //Диструктор
		   
		    bool parser(istream& istr);
	};
	
	class CombiParser : public Parser
	{
		private: //Данные.
		
			struct Item
			{
				Parser* parser;
				Item* next;
			};
			
			Item* list;

		protected:
		
		public: //Методы.
	
			CombiParser(); //Конструктор
			
			CombiParser(int num, ...); //Конструктор

		   ~CombiParser(); //Диструктор
		   
		    bool parser(istream& istr); //
	};
	

#endif

/*    //for *.c and *.cpp
#ifndef HEADER_H
#define HEADER_H

		   #ifdef __cplusplus
extern "C" {
		   #endif
	
	
	
	
		   #ifdef __cplusplus
		   }
		   #endif

#endif 
*/