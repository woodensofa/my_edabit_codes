//https://edabit.com/challenge/jwRY4WTFGJMmK4LRE
std::string pHName(float pH) {
if(pH<0 || pH>14)
	return "invalid";
else if(pH==7)
	return "neutral";
else if(pH>7)
	return "alkaline";
else if(pH<7)
	return "acidic";
}
//////////////////////////////////////////
//https://edabit.com/challenge/aQCbY6EdGQ9uA5som
std::string addParityBit(std::string b) {
	int i=0;
	std::size_t found = b.find_first_of("1");
  while (found!=std::string::npos)
  {
    ++i;
    found=b.find_first_of("1",found+1);
  }
	if(i%2==0){
		return b+"0";
	}
	else if(i%3==0){
		return b+"1";
	}
}
