// This program has three functions: main, deep, and deeper
#include <iostream>
using namespace std;
/***************************************
*
deeper
*
* This function displays a message.
*
***************************************/
void deeper()
{
cout << "I am now inside the function deeper.\n";
}
/***************************************
*
deep
*
* This function displays a message.
*
***************************************/
void deep()
{
cout << "I am now inside the function deep.\n";
deeper(); // Call function deeper
cout << "Now I am back in deep.\n";
}
/***************************************
*
main
*
***************************************/
int main()
{
cout << "I am starting in function main.\n";
deep();
// Call function deep
cout << "Back in function main again.\n";
return 0;
}