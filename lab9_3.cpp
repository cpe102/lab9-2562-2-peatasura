//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    float count =0;
    double mean=0,sd=0,q=0,f;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        cout << textline << '\n';
        mean+= atof(textline.c_str());
       // f=atof(textline.c_str());
        q += pow(atof(textline.c_str()) , 2);
       // sd+= pow(f,2);
        //sd+=q;
        count++;
    }
    source.close();
     mean /= count;
    sd = (q/count)-pow(mean,2);
    sd = sqrt(sd);
   
   // sd = pow(sd, 0.5);
    //cout << q << " " << mean << " " << count << " \n" << pow(mean , 2) << " " << q/count << " " << pow(sd,2) <<endl;
    cout << "Number of data = " << count << "\n";
    cout << "mean = " << mean << '\n' ;
    cout << "SD = " << sd;
}