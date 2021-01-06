//How to get the square root of a number without using the sqrt function
//https://ourcodeworld.com/articles/read/884/how-to-get-the-square-root-of-a-number-without-using-the-sqrt-function-in-c
#include<stdio.h>

void main()
{
    int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }

    printf("The square root of '%d' is '%f'", number, sqrt);
}
//
//https://edabit.com/challenge/nasKYub6qEAfQcFuy
#include<math.h>
int quadraticEquation(int a, int b, int c) {
	signed int x=(((-1*b)+sqrt((b*b)-(4*a*c)))/(2*a));
	return x;
}
//
//https://edabit.com/challenge/3HEY2ZfqMXyZsA87i
std::vector<std::string> isFourLetters(std::vector<std::string> arr) {
	std::vector<std::string> arr2;
	for(std::string t:arr){
		if(t.size()==4){
			arr2.push_back(t);
		}
	}
	return arr2;
}
//
std::vector<std::string> isFourLetters(std::vector<std::string> arr) {
std::vector<std::string> bar;
std::copy_if (arr.begin(), arr.end(), bar.begin(), 
              [](std::string i){
              if(i.size()==4)
              return i;
              } );
	return bar;
}
//
//https://edabit.com/challenge/cMraqvGfcqt4pSGLm
std::vector<std::vector<int>> reverseImage(std::vector<std::vector<int>> image) {
	std::transform(image.begin(), image.end(), image.begin(), 
	[](std::vector<int> i){
	for(int k=0;k<i.size();k++)
	    i[k]=!i[k];
	    return i;}
	);
	return image2;
}
//
//https://edabit.com/challenge/7oyHeyJR2LkB3hr8g
#include <vector>

std::vector<int> arrayOfMultiples(int num, int length) {
	std::vector<int> result;
	for(int i=1;i<=length;i++)
		result.push_back(num*i);
	return result;
}
