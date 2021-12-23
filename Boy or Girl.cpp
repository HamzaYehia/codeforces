// problem name: Boy or Girl
// problem link: https://codeforces.com/problemset/problem/236/A
// status: accepted
 
// auother: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char userName[100];
    cin>>userName;
    int counter = 0;
    int flag = 1;
    for (int i = 0; i < strlen(userName); i++)
    {
        for (int j = i + 1; j < strlen(userName); j++)
	    {
            if (userName[i] == userName[j])
	        {
		        flag = 0;
		        break;
	        }
        }
        if (flag == 1)
   	    {
	        counter++;
 	    }
	flag = 1;
    }
    if (counter % 2 == 0)
    {
	cout << "CHAT WITH HER!" << endl;
    }
    else
	cout << "IGNORE HIM!" << endl;
}
