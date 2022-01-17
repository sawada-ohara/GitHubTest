#pragma once


namespace Sawada
{
	class Person
	{
	private:
		const char* name;
		int age;

	public:
		Person();
		virtual ~Person();

		void SetName(const char*);
		void SetAge(int);

		void Print();
	};
};
