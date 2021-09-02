#pragma once
#include<string>
using namespace std;
class Candidate
{
private:
	int Code;
	float MathScore, LiteratureScore, EnglishScore;
	string Name,DayofBirth;
public:
	Candidate(void);
	~Candidate(void);
	void Input();
	float GPA();
	void Output();
};

