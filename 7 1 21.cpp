//https://edabit.com/challenge/5KAsvzdc9DLfEx65t
using namespace std;

vector<int> miniPeaks(vector<int> arr) {
	vector<int> arr2;
	for(int i=1;i<arr.size();i++){
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
			arr2.push_back(arr[i]);
	}
	return arr2;
}
//
//----------------------------CHECK IT ASAP!! RESOLVE THE PROBLEM. ->
//https://edabit.com/challenge/N3kQb6GD9DM6D2iS5
bool oddeven(std::vector<int> a) {
	int odd= 0, even= 0;
	int size = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<=size;i++)
	{	
		if(a[i] %2 ==0)
			even ++;
	 	else 
			odd ++;
	}
	return (odd > even)?true:false;
}
//----------------------------
//
