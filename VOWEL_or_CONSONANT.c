#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    { 
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("VOWEL");
        else
        printf("CONSONANT");
    }
    else if(ch>='A' && ch<='Z')
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("VOWEL");
        else 
        printf("CONSONANT");
    }
    
    
}