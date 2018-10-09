#include	<stdio.h>

struct coll
{
		int cid;
		char cname[12];
};
struct stu
{
		int id;
		char name[12];
		struct coll col_det;
};
int main()
{
		struct stu uma={123,"uma",1234,"vbit"};
		struct stu dp;
		FILE *kil;
		FILE *outfile;
		char ch[1234];
		char cc;
		kil=fopen("somefile.txt","w+");
		fwrite(&uma,sizeof(uma),1,kil);
		kil = fopen ("somefile.txt","r");
		if (kil== NULL)
		{
				fprintf(stderr, "\nError opening accounts.dat\n\n");
				//exit (1);
		}

		fread (&dp, sizeof(struct stu), 1, kil);
		printf("%s",dp.name);
		
}


