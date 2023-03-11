#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);


typedef enum{
    ReservedWord,LibraryName,Comment,Identifier,Constant,Operator,Comparator,Bracket,FormatSpecifier,Pointer,Address,Punctuation,PrintedToken,UndefinedToken,SkippedToken,Character
} TOKENCLASS;

typedef struct token{
    TOKENCLASS tokenClass;
    map<string,int> word;
} TOKEN;




class Scanner{

public:
    bool init(const char[]);
    void printText();
	void getToken();
	bool outputFile(const char []);
    
    


private:
    void initToken();
    int isLetter(char);
    int isDigit(char);
    int isWhiteSpace(char);
    void printLine(int);
    void jumpSpace();
    int moveChar();
    void moveNextLine();
    int countToken();
    int countTokenClass(int);

    fstream FILEIN,FILEOUT;
    vector<vector<char>> text;
    vector<string> str_arr;
    TOKEN token[16];
    
    int n_char = 0 , t_char = 0;
    int n_line = 0 , t_line = 0; 
    char c=' ';
    int STOP = 0;
    int t_token = 0;
};
