#include <stdio.h>

int main(){
    char c;
    int letter=0;
    int number=0;
    int space=0;
    int others=0;
    c=getchar();

    while (c!='\n')
    {
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        letter++;
    }else if(c>='0' && c<='9'){
        number++;
    }else if(c==' '){
        space++;
    }else{
        others++;
    } 
    c=getchar();   
}
    
    

 
    printf("letter=%d number=%d space=%d others=%d",letter,number,space,others);
    return 0;
}