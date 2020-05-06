/*
 * Attention: this source code is complete garbage, but it shows how one can use goto the right way (gotoGood 
 * function) or the wrong way (gotoBad function) with unpredictable outcome (not really unpredictable, but very
 * hard to figure out by just studying the source code).
 */

#include <iostream>

void gotoGood(int i)
{
	if (i == 0)
	{
		std::cout << "first if\n";
		goto end;
	}
	else if (i == 3)
	{
		std::cout << "impossible branch\n";
		goto end;
	}
	else if (i == 5)
	{
		std::cout << "irrational branch\n";
	}
	else if (i == 98)
	{
		std::cout << "unusual branch\n";
	}
	std::cout << "got for it!\n";

end:
	return;
}

void gotoBad(int i)
{
	std::cout << "Stupid function\n";
	goto jump;

branch1:
	std::cout << "this is branch 1\n";
	if (i % 2 == 0)
		goto branch87;

branch67:
	if (i == 59)
		std::cout << "this is branch 67\n";
	else
	{
		i--;
		if (i < 0)
			goto jump;
		else
			goto branch67;
	}

branch87:
	std::cout << "this is branch 87\n";
	i = 45;
	goto branch67;

jump:
	if (i == 1)
		goto branch1;
}

int main()
{
	std::cout << "Testoutput\n";

	int i = 0;

	gotoGood(i);
	i++;
	gotoBad(i);

	return 1;
}
