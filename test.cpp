#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
#include "Scanner.h"
#include "funtion.h"

int main(int argc,char* argv[]){

    if(argc < 2){
        cout<<"[Error] It's lack of the input file.\n";
        return 2;
    }

    Scanner s;
		
	if(!s.init(argv[1])){
        cout<<"[Error] "<<argv[1]<<" can't be opened.\n";
        return 2;
    }    
    s.getToken();

    char filename[] = "scanner_";
    
	strcat(filename,argv[1]);
    
    bool correct = s.outputFile(filename);
    
	if(correct) cout<<"The file output.\n";
    else 
        cout<<"[Error] It can't output file\n";

    return 0;
}
