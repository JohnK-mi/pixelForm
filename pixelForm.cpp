#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
    if(argc!=4){
        cerr<<"ERROR! Correct usage is ./pixelForm fromFile toFile isLast";
    }
    else{
        ofstream myfile(argv[2]);
        ifstream frofile(argv[1]);
        getline(frofile,myText);
        myfile<<mytext;
        if(argv[3]=="y"||argv[3]=="Y"){
            myfile<<"],";
        }
        else{
            myfile<<"]}";
        }
        
    }

}
