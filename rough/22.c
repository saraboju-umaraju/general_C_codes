

int main()

{

static int i = 10;

static int x = i;

if (x == i)

printf("Equal\n");

else

if (x > i)

printf("Greater than\n");

else

printf("Less than\n");

return 0;

} 
