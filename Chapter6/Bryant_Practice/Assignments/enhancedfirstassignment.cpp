/*Bryant Zepeda
CSIT 839
Assignment #1
DO NOT TURN THIS ONE IN! THIS ONE IS TO IMPROVE ON AND WORK WITH MIXED NUMBERS!
*/
#include <iostream>
using namespace std;
bool reduce(int&, int&);
  /*
 To reduce a fraction, try dividing the larger of the numerator/denominator by
 the smaller of the two; if not divisible, try the next lower number until you reach 1.
 For example, if the fraction is 12/9, try dividing 12 by 9, if it were divisible,
 you'd be done, but since it's not you try 12 over 8, 7, 6, ..., 3;
 when you get to 3, they're both divisible so you divide both by 3 getting 4/3.*/

void calc(int&,char&,int&, char&, int&, char&, int&, int&, int&);
int main()
{
int psr_num1, psr_den1, psr_num2, psr_den2;
 char slash; char m_loop, cap_op;

char operation;
cout << "Enter a fraction expression: ";
 cin >> psr_num1 >> slash >> psr_den1 >>

operation >> psr_num2 >> slash >> psr_den2;

 int store_num, store_den;
 calc(psr_num1,slash, psr_den1, operation, psr_num2,slash,psr_den2, store_num, store_den);
 /*reduce(store_num, store_den);*/

 cout << psr_num1 << slash << psr_den1 << operation << psr_num2
      << slash << psr_den2 << " = " << store_num << slash << store_den 
      << endl;

       cout << "Do you want to continue? : [Y/N] \n";
       cin >> m_loop;
       cap_op = toupper(m_loop);
       
       do{
       if(cap_op == 'Y')
	 {
	   return main();
	 }
       if(cap_op == 'N')
	 {
	   cout << "Press any key to continue: " << endl;
	   return 0;
	 }
       else
	 {
	   break;
	 }
       }while(cap_op != 'Y' | cap_op != 'N');
//system("pause");
       return 0;
}
void calc(int& num1, char& slash1, int& den1, char& op_calc, int& num2, char& slash2, int& den2, int& calln, int& calld)
{
if(op_calc == '+')
  {
    num2 = num2 * den1;
    num1 = num1 * den2;
    den1 = den1 * den2;
    calld = den1;
    calln = num1 + num2;
  }
 if(op_calc == '-')//please fix
  {
	num2 = num2 * den1;
	num1 = num1 * den2;
	den1 = den1 * den2;
	calld = den1;
	calln = num1 - num2;
	/*There will be instances that num2 will be greater than num1 so just a REMINDER*/
  }
if(op_calc == '*')
  {
    calln = num1 * num2;
    calld = den1 * den2;
  }
if(op_calc == '/')
  {
    calln = num1 * den2;;
    calld = num2 * den1;
  }
}
/*
bool reduce(int& r_num, int& r_den)
{
  for(int i = r_num < r_den ? r_num : r_den; i <= 1; --i)
    {
      if(r_num % i == 0 && r_den % i == 0)
	{
	  r_num/=i;
	  r_den/=i;
	}
    }
    }*/
