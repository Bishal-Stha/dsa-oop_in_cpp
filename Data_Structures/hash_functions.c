#include<stdio.h>
#include<ctype.h>
#define SIZE 100

int hash_function(char *key)
{
    int hash = toupper(key[0]- 'A');
    return hash % SIZE;
}

int main()
{

}