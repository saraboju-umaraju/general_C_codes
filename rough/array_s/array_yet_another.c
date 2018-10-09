void foo(int[]);
int main()
{
static int arr[15];
foo(arr);
//char arr2[3]={'a','b'};
printf("%d%d",arr[4],arr[5]);
}
void foo(int arr[])
{
arr=arr+2;
arr[3]=5;
}
