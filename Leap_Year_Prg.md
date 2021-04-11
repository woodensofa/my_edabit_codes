[Edabit Leap Year Function ⌚](https://edabit.com/challenge/uiukKq8SDxjWBHb8x)
**Rules : **
-See if the year is divisible by 4. If yes, go to step 2.
-See if the year is divisible by 100. If yes, go to step 3. If no, it’s a leap year.
-See if the year is divisible by 400. If yes, it’s a leap year. If no, it's not a leap year.
'''
bool leapYear(int year) {
	if(year==1900 || year==2000)
			return false;
	else if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
		else
			return false;
}
'''
