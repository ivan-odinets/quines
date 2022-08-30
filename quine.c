#include <stdio.h>
char n='\n';char q='\'';char b='\\';char d='\"';
char* string="#include <stdio.h>%cchar n=%c%cn%c;char q=%c%c%c%c;char b=%c%c%c%c;char d=%c%c%c%c;%cchar* string=%c%s%c;%cint main() { printf(string,n,q,b,q,q,b,q,q,q,b,b,q,q,b,d,q,n,d,string,d,n,n); return 0; }%c";
int main() { printf(string,n,q,b,q,q,b,q,q,q,b,b,q,q,b,d,q,n,d,string,d,n,n); return 0; }
