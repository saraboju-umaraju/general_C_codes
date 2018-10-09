#include	"header.h"


int program(FILE *fp )
{
	Elf32_Phdr Prog[p->e_phnum];
	int index;
	fseek( fp , p->e_phoff , SEEK_SET);

	fread( &Prog , sizeof(Elf32_Phdr) , p->e_phnum , fp);

	printf( "Program Headers:\n");

	printf("  Type\t\tOffset\tVirtAddr   PhysAddr   FileSiz "
					"MemSiz  Flg Align\n");


	for( index = 0 ; index < p->e_phnum ; index++) {


		switch( Prog[index].p_type ) {

				case PT_NULL :
						printf("%-15s","  NULL");
						break;
				case PT_LOAD :
						printf("%-15s","  LOAD");
						break;
				case PT_DYNAMIC :
						printf("%-15s","  DYNAMIC");
						break;
				case PT_INTERP :
						printf("%-15s","  INTERP");
						break;
				case PT_NOTE :
						printf("%-15s","  NOTE");
						break;
				case PT_SHLIB :
						printf("%-15s","  SHLIB");
						break;
				case PT_PHDR :
						printf("%-15s","  PHDR");
						break;
				case PT_LOPROC :
						printf("%-15s","  LOPROC");
						break;
				case PT_HIPROC :
						printf("%-15s","  HIPROC");
						break;
				case PT_GNU_STACK :
						printf("%-15s","  GNU_STACK");
						break;
				case PT_TLS :
						printf("%-15s","  TLS");
						break;
						
				case PT_LOOS :
						printf("%-15s","  LOOS");
						break;

				case PT_HIOS :
						printf("%-15s","  HIOS");
						break;

				case PT_GNU_EH_FRAME :
						printf("%-15s","  GNU_EH_FRAME");
						break;
//				case PT_RELRO :
//						printf("%-15s","  RELRO");
//						break;

				default :
						printf("%-15s","  GNU_RELRO");
						break;
		}

		printf("0x%06x ", Prog[index].p_offset);
		printf("0x%08x ", Prog[index].p_vaddr);
		printf("0x%08x ", Prog[index].p_paddr);
		printf("0x%05x ", Prog[index].p_filesz);
		printf("0x%05x ", Prog[index].p_memsz);

		switch( Prog[index].p_flags) {

				case PF_X | PF_R:
						printf("%-3s ","R E");
						break;

				case PF_W | PF_R :
						printf("%-3s ","RW");
						break;

				case PF_R :
						printf("%-3s ","R");
						break;
				default :
						printf("%-3s ", " ");
		}


		printf("0x%-4x",Prog[index].p_align);

		printf("\n");



	}





	return 0;

}



