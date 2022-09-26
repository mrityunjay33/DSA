#include<iostream>
#include<cstring>
using namespace std;

string keypad[] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};


void printKeypadOutput(string input,string output,int i=0){
    
    //since last letter of string is null terminated
	if(input[i]=='\0'){
		cout<<output<<endl;
		return;
	}

	//recursive case
	int current_digit = input[i] - '0';
    
    /* since '0' and '1' have no letters attached to it
       1 2 3
       4 5 6
       7 8 9
         0    */
	if(current_digit==0 or current_digit==1){
		printKeypadOutput(input,output,i+1);
	}

	//keypad 
	for(int k=0; k<keypad[current_digit].size();k++){
		printKeypadOutput(input,output + keypad[current_digit][k],i+1);
	}
	return;

}



int main(){

	string input;
	cin>>input;

	string output;
	printKeypadOutput(input,output);

	return 0;
}
