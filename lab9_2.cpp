//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    //cout << "-------------------- SOTUS ---------------------";
    ifstream source;
    ofstream cheerbook_copy("C:\\Users\\PrayatZ\\Desktop\\lab9\\lab9-2562-2-peatasura\\cheerbook_copy.txt");
    source.open("C:\\Users\\PrayatZ\\Desktop\\lab9\\lab9-2562-2-peatasura\\cheerbook.txt");
    cheerbook_copy << "-------------------- SOTUS ---------------------\n";
    string textline;
    //bool cheerbook_copy;
   // cheerbook_copy = getline(source,textline);
    while(getline(source,textline))
    {
        cheerbook_copy << textline << '\n';
    }
    source.close();
    cheerbook_copy << "-------------------- SOTUS ---------------------";
    return 0;
}