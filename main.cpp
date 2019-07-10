#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string sentence;

bool palindrome(string sentence)
{
    int x=0;
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    int length=sentence.length();
        if(length==0){cout<<"No sentence was given.";exit(0);}
            for(int i=0; i<(length/2) ;i++)
            {
               // if(sentence[x]==sentence[length-x-1])
                x++;
            }
        if (x==length/2) return true;
        else return false;
}

int main()
{
    cout<<"Write a sentence to check: ";
    getline(cin, sentence);
    if(palindrome(sentence)){
    cout<<"It's a palindrome."<<'\n';}
    else{
    cout<<"It isn't a palindrome."<<'\n';}

    return 0;
}
