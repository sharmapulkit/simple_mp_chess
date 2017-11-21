#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	cout << "\033[1;30;47mbold Black text in White BG\033[0m\n" << endl;
	cout << "\033[1;37;40mbold White text in Black BG\033[0m\n" << endl;
	//cout << "\033[1;37;46mbold White text in Black BG\033[0m\n" << endl;
	printf("\033[1;%d;%dm%c\033[0m\n", 37, 46, 'R');
	return 0;
}