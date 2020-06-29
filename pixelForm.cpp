#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
    if(argc!=5){
        cerr<<"ERROR! Correct usage is ./pixelForm fromFile toFile isLast letter";
    }
    else{
        ofstream myfile(argv[2],ofstream::app);
        ifstream frofile(argv[1]);
        string myText;
        getline(frofile,myText);
        myfile<<"\""<<argv[4]<<"\":";
        myfile<<myText;
        if(argv[3]=="y"||argv[3]=="Y"){
            myfile<<"}";
        }
        else{
            myfile<<",";
        }
        
    }

}
