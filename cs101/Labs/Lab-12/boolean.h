#include<iostream>
#include<cmath>
using namespace std;


const int MAX_SYMBOLS=5;
const int MAX_EXPR_SIZE=20;

struct Symbol{
char name;  //stores the symbol's character

bool value; //stores the symbol's truth value


};

class BooleanExpr{
private:

int symbol_cnt; //stores the number of symbols in the expression

int expr_len; //stores the number of characters (symbols, operators) in the expression

Symbol symbols[MAX_SYMBOLS]; //stores the symbols in the expression

char expr[MAX_EXPR_SIZE]; //stores the characters (symbols, operators) in the expression}

public:

void read_expr(char* expr1, int expr_size, char* symbols1, int symbols_size){
for(int i=0;i<expr_size;i++){expr[i]=expr1[i];}
for(int i=0;i<symbols_size;i++){symbols[i].name=symbols1[i];}
symbol_cnt=symbols_size;
expr_len=expr_size;}

void print_truth_table(){
int a=1
;for(int i=0;i<symbol_cnt;i++){a=a*2;}
for(int i=0;i<symbol_cnt;i++){cout<<symbols[i].name<<" ";}cout<<"->"<<" "<<"("<<expr<<")"<<endl;
for(int k=0;k<a;k++){for(int i=0;i<symbol_cnt;i++){symbols[symbol_cnt-1-i].value=(k%2);k=k/2;}
for(int i=0;i<symbol_cnt;i++){for(int j=0;j<expr_len;j++){if(symbols[i].name==expr[j]){expr[j]=symbols[i].value;}}}
int value;
if(symbols[0].value!=33){ value=symbols[0].value;} else value=1-symbols[0].value;
for(int i=0;i<expr_len;i++){if(expr[i]==42){if(expr[i+1]==33){value=value*(1-expr[i+2]);}
                                                     else value=value*expr[i+1];}
                            if(expr[i]==43){if(expr[i+1]==33){value=(value+(1-expr[i+2]))%2;}
                                                     else value=(value+expr[i+1])%2;}}
    for(int i=0;i<symbol_cnt;i++){cout<<symbols[i].value<<" ";}
    cout<<"->"<<" "<<value<<endl;

}

}
};
