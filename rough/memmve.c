int main()
{
char str[]="taditti";
char str2[]="mamitti";

//printf("%s\n",str);
memcpy(str2,str2+2,strlen(str2));

memmove(str,str+2,strlen(str));

printf("%s\n",str);

printf("%s\n",str2);
}

