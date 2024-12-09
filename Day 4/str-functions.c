#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20], name[50];
    printf("enter your first name:");
    scanf("%s", f_name);
    printf("enter your last name:");
    scanf("%s", l_name);
    //strcpy => string copy -> strcpy(resultstring, orgstring)
    strcpy(name, f_name);
    //strcat => string concatenation -> strcat(result_str,org_str)
    //ex: str1 = "thalapathy" str2="vijay" -> strcat(str1,str2) => str1 = thalapathyvijay 
    strcat(name, l_name);
    printf("full name: %s\n", name); //using string handling functions
    printf("full name: %s %s\n",f_name, l_name); 
    printf("full name in uppercase: %s\n", strupr(name));
    //strupr -> string upper -> converts the given string to upper case
    printf("full name in lowercase: %s\n", strlwr(name));
    //strlwr -> string lower -> converts the given string to lower case
}