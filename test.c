#include "stdio.h"
int main( void )
{
    FILE *p = fopen("one.txt","r");
    int c=0,i=0;
    int ch[256]={0};
    while( (c=fgetc(p)) != EOF)
        ch[c]++;                //256种字节值都记录下来 
    fclose(p);
     
    for( i=0 ; i<256 ; i++ )    //遍历256种字节值的个数 
        if( (i>='A'&&i<='Z') || (i>='a'&&i<='z') )    //是字母就输出 
            printf("%c:%d\n", i, ch[i] );
    return 0;
}
