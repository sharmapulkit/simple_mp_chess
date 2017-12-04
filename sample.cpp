#include <iostream>
#include <curses.h>
using namespace std;
// extern int a;
int function(int aa){
	int a = 4;
	a++;
	cout << '\r' << aa << flush;
	return a;
}

const int* var = new int(5);
int main(){
	//cout << "Initial : " << a << endl;
	//a = 4;
	//cout << "Changed : " << a << endl;
	// int h1 = function();
	// cout << h1 << endl;
	// int h2 = function();
	// cout << h2 << endl;

	int * a;
	// int* const a = new int;
	int * b;
	int aa = 5;
	int bb = 4;

	// while (true){
	// 	cin >> aa;
	// 	// function(aa);
	// }

	char users_name[ 100 ];

  initscr();
  (void)echo();

  addstr( "What is your name> " );
  refresh();
  getnstr( users_name, sizeof( users_name ) - 1 );

  clear();

  printw( "Greetings and salutations %s!\n", users_name );
  refresh();

  printw( "\n\n\nPress ENTER to quit." );
  refresh();
  getnstr( users_name, sizeof( users_name ) - 1 );

  endwin();

	return 0;
}