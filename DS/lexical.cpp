#include <bits/stdc++.h>

using namespace std;

int keyoride(char str[]){
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
                            "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"};
    int i, ct = 0;
    
    for(i = 0; i < 32; ++i){
        if(strcmp(keywords[i], str) == 0){
            ct = 1;
            break;
        }
    }
    
    return ct;
}




int main(){
	char c, str[15], operators[] = "+-*/%=";
	fstream f1;
	f1.open("program.txt",fstream::in);
	int i,j=0;
	while(!f1.eof()){
           c = f1.get();
           
        for(i = 0; i < 6; ++i){
               if(c == operators[i])
                   cout<<c<<" is operator\n";
           }
           
           if(isalnum(c)){
               str[j++] = c;
           }
           else if((c == ' ' || c == '\n') && (j != 0)){
                   str[j] = '\0';
                   j = 0;
                                      
                   if(keyoride(str) == 1)
                       cout<<str<<" is keyword\n";
                   else
                       cout<<str<<" is indentifier\n";
           }
           
    }
    
	return 0;
}