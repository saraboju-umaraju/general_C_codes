#include	"header.h"

int section( FILE *fp)
{

	Elf32_Shdr S[p->e_shnum] ; 

	int index;                     

	char *buf = NULL;

	fseek( fp , p->e_shoff , SEEK_SET );

	if(!(fread( &S , sizeof(Elf32_Shdr) , p->e_shnum , fp))) {

		printf(" file reading  is failed\n");
	}
					

	if((buf = (char*) malloc( S[p->e_shstrndx].sh_size )) == NULL){

		printf("malloc is failed\n");

		return 0;
	
	}

	fseek( fp , S[p->e_shstrndx].sh_offset , SEEK_SET );

	fread( buf ,  S[p->e_shstrndx].sh_size , 1 , fp);

	printf("\n\n");

	printf("Section Headers:\n");

	printf(" [Nr]   Name\t\t  Type\t\t  Addr\t  Off\t  Size\tES Flg Lk Inf Al\n");

	for (index = 0 ; index < p -> e_shnum ; index++) {

		printf ("  [%2d] %-18s ",index, buf + S[index].sh_name );

		switch( S[index].sh_type ) {

			case SHT_NULL :    printf("NULL\t\t");
			  
				 break;
			case SHT_PROGBITS :    printf("PROGBITS\t");
			   	
				 break;
			case SHT_SYMTAB :    printf("SYMTAB\t");
			   
				 break;
			case SHT_STRTAB :    printf("STRTAB\t");
			  
				 break;
			case SHT_RELA :    printf("RELA\t");
			  
				 break;
			case SHT_HASH :    printf("HASH\t");
			  
				 break;
			case SHT_DYNAMIC :    printf("DYNAMIC\t");
			  
				 break;
			case SHT_NOTE :    printf("NOTE\t\t");
			  
				 break;
			case SHT_NOBITS :    printf("NOBITS\t");
			  
				 break;
			case SHT_REL :    printf("REL\t\t");
			   
				 break;
			
			case SHT_SHLIB :    printf("SHLIB\t");
			  
				 break;
							  
			case SHT_DYNSYM :    printf("DYNSYM\t");
			  
				 break;

			case SHT_LOPROC :    printf("LOPROC\t");
			   
				 break;
			case SHT_HIPROC:    printf("HIPROC\t");
			  
				 break;

			case SHT_LOUSER:    printf("LOUSER\t");
			  
				 break;

			case SHT_HIUSER:    printf("HIUSER\t");
			  
				 break;

			case SHT_INIT_ARRAY:    printf("INIT_ARRAY\t");
			  
				 break;

			case SHT_FINI_ARRAY:    printf("FINI_ARRAY\t");
			  
				 break;

			case SHT_GNU_HASH:    printf("GNU_HASH\t");
			  
				 break;

			case SHT_GNU_versym:    printf("VERSYM\t");
			  
				 break;
			case SHT_GNU_verneed:    printf("VERNEED\t");
			  
				 break;
		}
		printf("%06x\t",S[index].sh_addr);
		printf("%06x\t",S[index].sh_offset);
		printf("%06x\t",S[index].sh_size);
		printf("%02x  ",S[index].sh_entsize);


		if( (S[index].sh_flags & SHF_WRITE) && (S[index].sh_flags & SHF_ALLOC) ) {

		   printf("%2s", "WA");
		}
		else if( (S[index].sh_flags & SHF_EXECINSTR) && (S[index].sh_flags & SHF_ALLOC) ) {

			printf("%2s", "AX");
		}
		else if( (S[index].sh_flags & SHF_ALLOC) ) {

			printf("%2s", "A");
		}
		else if( (S[index].sh_flags & SHF_MERGE) && (S[index].sh_flags & SHF_STRINGS) ) {

			printf("%2s", "MS");
		}
		else {
			printf("%2s", " ");
		}

	/*	switch( S[index].sh_flags) {

			if( SHF_ALLOC & SHF_EXECINSTR ) {
			   else if SHF_ALLOC :	   
			   printf("%2s", "A");
			   break;
			case SHF_ALLOC  SHF_WRITE :
			   break;
			case SHF_MERGE | SHF_STRINGS :
			   printf("%2s","MS");
			   break;
		    default :
			   printf("  ");
			   break;
		}
*/

		printf("%3d ",S[index].sh_link);
		printf("%3d ",S[index].sh_info);
		printf("%2d ",S[index].sh_addralign);
		printf("\n");

	}

	printf("Key to Flags:\n"
			"W (write), A (alloc), X (execute), M (merge), S (strings)\n"
			" I (info), L (link order), G (group), T (TLS), E (exclude),"
			"x (unknown)\n O (extra OS processing required) o (OS specific),"
			"p (processor specific)\n");

	 if( p->e_phoff) {
        program(fp );
    }
    else {
        printf(" there are no program header in the table:\n");
    }
    symbol(fp, S);


	return 0;
}



