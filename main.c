#include"stdafx.h"
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);
char(longestWord);

// generated using http://listofrandomnames.com/

char words[][20] = { "conjointness","factorized","artier","disemboguing","unvigilant","gallonage","favour","hyperparasitic","nondeferable","dacha" };
int nwords = 10;



void main()
{
    char word[20];
    int i = 0;
    
    printLongestWord();
    
    i = findWordWithMostVowels();
    printf("Word with most vowels is: %s \n", words[i]);
    
    puts("enter word");
    gets_s(word);
    
    if (findWord(word))
    {
        printf("%s is in our list of words\n", word);
    }
    else
    {
        printf("%s is not in our list of words\n", word);
    }
    
}





void printLongestWord()
{
    int  maxlent = 0, maxi = 0;
    char i = 0;
    int len = 0;
    for (i = 0; i < 10; i++) {
        if (strlen(words[i]) > maxlent) {
            maxlent = strlen(words[i]);
            maxi = i;
            
        }
    }
    printf("longest word is %s with %d letters", words[maxi], maxlent);
    
    
}

int findWord(char word[])
{
    for (int i = 0; i < nwords; i++)
    {
        if (!strcmp(word, words[i])) {
            return 1;
        }
        
        else
        {
            return 0;
        }
    }}


int findWordWithMostVowels()
{
    int maxVowels = 0;
    int maxVowelsWordId;
    for (int i = 0; i < nwords; i++)
    {
        int vowels = 0;
        for (int j = 0; j < strlen(words[i]); j++)
        {
            if (isVowel(words[i][j]))
                vowels++;
        }
        if (vowels > maxVowels)
        {
            maxVowelsWordId = i;
        }
    }
    return maxVowelsWordId;
}

int isVowel(char c)
{
    c = toupper(c);
    char vowels[5] = { 'A', 'E', 'I','O','U' };
    for (int i = 0; i < 5; i++)
    {
        if (c = vowels[i])
            return 1;
        else
            return 0;
    }
}
