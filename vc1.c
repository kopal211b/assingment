//consonants,vowels and special character with array
#include <stdio.h>
int main(){
      char str[100];
    printf("Enter word: ");
    gets(str);
      int vo=0,c=0,m=0;
    int s=strlen(str);
    char v[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i=0;str[i]!='\0';i++){
        char a=str[i];
        for(int j=0;j<10;j++){
            if(a==v[j]){
                vo++;
                m=1;
            }
        }
        if(m!=0 && (str[i]>='A' && str[i]<='Z'|| str[i]>='a' && str[i]<='z') ){
            c++;
        }
    }
    printf("%d %d %d",vo,c,s-(vo+c));
}
