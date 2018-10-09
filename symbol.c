#include	"header.h"


int symbol( FILE *fp, Elf32_Shdr S[]) 
{
	int len = 0;

						 // calculating the no .of symbol table entries
	len = (S[ (p->e_shstrndx) +1].sh_size) /(S[ (p->e_shstrndx) +1].sh_entsize);

	Elf32_Sym sym[len];  // array of symbol table headers  

	int index ;			 // looping variable

	char *buf = NULL;	 // taking char buff for reading the symbol table names	
						 
						 // move the file pointer to symbol table staring address
	fseek( fp , S[(p->e_shstrndx) + 1].sh_offset , SEEK_SET ); 

						// reading the symbol table 
	fread( &sym , sizeof(Elf32_Sym) , len , fp);

						//move the file pointer to string table (name) staring address
	fseek( fp , S[(p->e_shstrndx) + 2].sh_offset , SEEK_SET );

						// Allocating buff for reading string table
	if((buf = (char*)malloc( S[(p->e_shstrndx) +2].sh_size )) == NULL){

		printf("malloc is failed\n");
	
		return 0;

	}
	
	fread( buf ,  S[(p->e_shstrndx)+2].sh_size , 1 , fp);
	
	printf("\n\n");
	
	printf(" symbol table:\n");

	printf("  Num:  Value  Size   Type    Bind    Vis        Ndx  Name\n");

	for (index = 0 ; index < len ; index++) {       

		printf("  %2d:",index); 		// index

		printf(" %8x", sym[index].st_value);   // symbol table value

		printf(" %4d   ", sym[index].st_size); // symbol table size				
				
		switch( (sym[index].st_info) & 0xf ) { //symbol table information(TYPE)

			case STT_NOTYPE :printf("%-8s", "NOTYPE");
				 
			     break;
									 
			case STT_OBJECT :printf("%-8s", "OBJECT");
		 	
			     break;
			case STT_FUNC :printf("%-8s", "FUNC");
				 
			     break;
			case STT_SECTION :printf("%-8s", "SECTION");
			    
				 break;
			case STT_FILE :printf("%-8s", "FILE");
			    
				 break;
			case STT_COMMON :printf("%-8s", "COMMON");
			    
				 break;
			case STT_TLS :printf("%-8s", "TLS");
			    
				 break;
			case STT_NUM :printf("%-8s", "NUM");
			    
				 break;
			case STT_HIOS :printf("%-8s", "HIOS");
			    
				 break;
			case STT_LOPROC :printf("%-8s", "LOPROC");
			    
				 break;
			case STT_HIPROC :printf("%-8s", "HIPROC");
			    
				 break;
						

		}
		switch( (sym[index].st_info) >> 4 ) {  //symbol table information(BIND)


			case STB_LOCAL :printf("%-8s", "LOCAL");
		       
				 break;
			case STB_GLOBAL :printf("%-8s", "GLOBAL");
			   
				 break;

			case STB_WEAK :printf("%-8s", "WEAK");
			    
				 break;

			case STB_NUM :printf("%-8s", "NUM");
			   
				 break;

			case STB_HIOS :printf("%-8s", "HIOS");
			   
				 break;

			case STB_LOPROC :printf("%-8s", "LOPROC");
			   
				 break;
			case STB_HIPROC :printf("%-8s", "HIPROC");
			   
				 break;


		}
			
		switch( (sym[index].st_other) & 0x3 ) {


			case STV_DEFAULT :printf("%-10s", "DEFAULT");
			    
				 break;
			case STV_INTERNAL :printf("%-10s", "INTERNAL");
			    
				 break;

			case STV_HIDDEN :printf("%-10s", "HIDDEN");
			    
				 break;

			case STV_PROTECTED :printf("%-10s", "PROTECTED");
			
			     break;

		}
				
		if( sym[index].st_shndx == SHN_UNDEF ) {   // symbol table index

			printf("%4s","UND");
		}
		else if( sym[index].st_shndx == SHN_ABS ) {

			printf("%4s","ABS");
        }
		else if( sym[index].st_shndx == 65522 ) {

			printf("%4s","COM");
        }
		else {
			printf("%4d", sym[index].st_shndx);
		}


        printf ("  %-25s ", buf + sym[index].st_name ); //symbol table name
	
		printf("\n");
	}

	return 0;

}

