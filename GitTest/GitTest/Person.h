#pragma once
class Person
{
public:
	char GetName();
	int Getage();
	void setName(char name);
	void Setage(int age);
private:
	char name;
	int age;
};

char Person::GetName()
{
	return name;
}

int Person::Getage()
{
	return age;
}

void Person::Setage(int age1)
{
	age = age1;
}

void Person::setName(char name1)
{
	name = name1;
}

