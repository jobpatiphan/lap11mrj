//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main (){
    ifstream source;
    source.open("score.txt") ;
    string textline;
    double i = 0;
    double sum = 0;
    double mean = 0;
    double sum2 = 0;
    double sd = 0;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        i++;
    }
    mean = sum/i;
    source.close();
    source.open("score.txt") ;
    string textline2;

    while(getline(source,textline2)){
        sum2 += pow(atof(textline2.c_str())-mean,2);
    }
    sd = sqrt(sum2/i);
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt(sum2/i) << endl;
    source.close();
    return 0;
}
