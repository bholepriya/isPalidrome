#include<iostream>
#include<string.h>
#include<stack>
#include<algorithm>


using namespace std;
bool isPalidrome(string palidromeCandidate, int); //declearation of ispalidrome 
int main(int argc, char* argv[])
{


    int n = argc;
    int p = 0;
    string palidromeCandidate;
        if(argc != 2)
        {
            cerr <<"error"<<endl;
            exit(0);
        }
        else{
                palidromeCandidate = argv[1];
             }
     int res = isPalidrome(palidromeCandidate,n);
    cout<<res<<endl;
    return EXIT_SUCCESS;
}
bool isPalidrome(string palidromeCandidate,int n)  //function to check whether string is palidrome or not
{
   char newString[50];
    if(n<=1)
        {
            return 0;
        }
            for(int i =n-1,j=0;i<=0;i--,j++)
                {
                newString[j] = palidromeCandidate[i];
                }

        for(int i = 0;i<n;i++)
        {
            if(newString[i] == palidromeCandidate[i])
            {
                return 1;
            }
            else{
                return 0;
            }
    }
  
}