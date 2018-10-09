int add (int x,int y)
{
return x+y; 
}
int main(){

int (*pp)(int , int);
pp=add;
printf("%d",pp(1,9));
return 0;}
