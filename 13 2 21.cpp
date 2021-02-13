//https://edabit.com/challenge/ixW8MyxCrKXjAQ6fF
std::vector<int> countPosSumNeg(std::vector<int> arr) {
	std::vector<int> res;
	if(!arr.empty()){
		int sum=0,count=0;
		for(int t:arr){
			if(t<0)
				sum=sum+t;
			else if(t>0)
				count++;
			else
				continue;
		}
		res.push_back(count);
		res.push_back(sum);
	}
	return res;
}
//https://edabit.com/challenge/jwPaBe2xjE46baPoG
int countVowels(std::string str) {
  int count=0;
  for(char a:str){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
      count++;
    else if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
      count++;
    else 
      continue;
  }
  return count;
}
//https://edabit.com/challenge/SFaaxd8NBpG7x3ivj
std::vector<int> cumulativeSum(std::vector<int> array) {
	int temp=0;
	std::vector<int> array1;
	for(int a:array){
		temp=temp+a;
		array1.push_back(temp);
	}
	return array1;
}
