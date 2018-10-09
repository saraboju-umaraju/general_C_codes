void func(char *str)
{
		char    buffer[256];
		int     i;

		i = 0;
		while(*str) buffer[i++] = *str++;
}

int main(int ac, char **av)
{
		char    *fstring = "First string";
		char    *sstring = "Second string";

		if(ac >= 2)
				func(av[1]);
		printf("%s => %s\n",fstring,sstring);
}
