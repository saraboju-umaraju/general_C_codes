 	

int main()

{

int s = 0;

while (s++ < 10) {

if (s < 4 && s++ < 9)

continue;

printf("%d ", s);

}

} 
