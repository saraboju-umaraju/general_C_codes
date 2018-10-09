#include"file_sys.h"
int main()
{
	d_store = store;
	int i,j,var = 0,ret,catch,dup_get_pos = 0;
	//static unsigned char junk = 0;
	void **ptr;
	unsigned int inod_rec,ind;
	
	char *dbptr, *ibptr, *dummy, *data, *p,*clean_ibptr,*data_addr;

	ptr = malloc(sizeof(void *));
	if((ret	= posix_memalign(ptr, 4096, 1024*1024)) != 0){
		printf("pozix_memalign failed\n");
	}

	sptr = *ptr;               //initiating super block pointer with start of memory
	dummy = *ptr;
	
	S_DBG("Return value is %d\n",ret);
	S_DBG("Return addr. is = %p\n",*ptr);
	S_DBG("size of *sptr is = %d\n",sizeof(*sptr));
	S_DBG("sptr addr. is = %p\n",sptr);
	S_DBG("Size of lon long int = %d\n",sizeof(long long int));
	

	/* Move the pointer to point to Data block bitmap*/
	dummy = dummy + 1024;
	dbptr = dummy;
	S_DBG("dbptr addr. now is = %p\n",dbptr);
	
	/* Move pointer to point to Inode block Bitmap*/
	dummy = dummy + 1024;
	ibptr = dummy;
	S_DBG("ibptr addr. now is = %p\n",ibptr);
	
	/* Move pointer to point to Inode Table*/
	dummy = dummy + 1024;
	iptr = (struct inode*)dummy;
	d_iptr = iptr;
	S_DBG("iptr addr. now is =  %p\n",d_iptr);
	
	/* Move pointer to start of Data Block*/
	dummy = dummy + 1024*22;
	data = dummy;
	S_DBG("data addr. now is =  %p\n",data);
		
	/* Reset 1024 location of inode bimap in the begining */	
	if((p = memset(ibptr, 0,1024)) == NULL) 
		printf("memset failed\n");
	S_DBG("Value at ibptr after RESET is %d\n",*ibptr);
	
	printf("\n\n***WELCOME TO VIKS FILE SYSTEM***\n");
	
	init_super(sptr); /*Initialize super block*/
	init_inode_structure(iptr);
	printf("***Please select any of following operation***\n");
	
	while(1) {
		printf("\n");
		printf("1. Create a file\n2. Remove a file\n3. Write into file\n4. cat\n5. ls\n");
		scanf("%d",&var);
		switch(var)
		{
			case 1:
					create_file(ibptr); 
					S_DBG("SIZE of struct inode is %d\n",sizeof(struct inode));
					//dummy_read(iptr);
					break; 
			
			case 2:
					printf("Enter Filename to be deleted\n");
					scanf("%s",del_name);
					inod_rec = get_inode(iptr,del_name);	
					if(inod_rec == -2) {
						printf("==== No such file created ====\n");
						continue;
					}	
					DBG("inod_rec = %d\n",inod_rec);
					clean_data_bitmap(iptr,inod_rec,dbptr);
					del_data_blocks(iptr,inod_rec);

		
					clean_ibptr  = ibptr;
					clean_ind_bitmap(clean_ibptr, inod_rec);
					printf("==== File Removed ====\n");
					add_free_inode(sptr);	
					break;

		 case 3:
					x = z = 0;
					d_store = store;
					printf("Enter Filename\n");
					scanf("%s",del_name);
					inod_rec = get_inode(iptr,del_name);
					if(inod_rec == -2) {
						printf("==== No such file created ====\n");
						continue;
					}	
					S_DBG("inod_rec = %d\n",inod_rec);
					ind = get_data();
					byte = ind /1024;
					bits = ind %1024;
					DBG("Bytes to be written is  : %d\n",byte);
					DBG("Bits  to be written is  : %d\n",bits);
					for(i = 0; i<byte; i++) {
						ind = get_free_bit_in_datab(dbptr);
						DBG("free_pos_recieved in data bitmap for bytes is  : %d\n",ind);
						data_addr = get_data_block(data,ind);
						update_data_block_in_inode(iptr,inod_rec,ind);
						DBG("=== Coping data from stdin buffer to my data memory ===\n");
						memcpy(data_addr,d_store,1024);
						d_store = d_store + 1024;
						DBG("===  DATA COPIED at addr. %p ===",data_addr);
						printf("====  DATA COPIED SUCCESSFULLY ====\n");
					}
					if(bits != 0){
						ind = get_free_bit_in_datab(dbptr);
						DBG("free_pos_recieved in data bitmap for bits is  : %d\n",ind);
						data_addr = get_data_block(data,ind);
						update_data_block_in_inode(iptr,inod_rec,ind);
						S_DBG("Coping data from stdin buffer to my data memory at %p\n",data_addr);
						memcpy(data_addr,d_store,1024);
						
						printf("====  DATA COPIED SUCCESSFULLY ====\n");
						DBG(" DATA COPIED is %s\n",data_addr);
					}
					memset(store,0,8192);
					dummy_read(iptr);
				
					sub_free_data_blocks(sptr);
					break;

			case 4:
					dd_iptr = iptr;
					printf("Enter Filename you want to read\n");
					scanf("%s",del_name);
					inod_rec = get_inode(iptr,del_name);	
					if(inod_rec == -2) {
						printf("==== No such file created ====\n");
						continue;
					}	
					recv = get_data_block_number(iptr,inod_rec,data_blk);
					dd_iptr = dd_iptr + (inod_rec * sizeof(struct inode));
					local = dd_iptr->blk_used;
					if(local == 0) {
						printf("==== File is empty ====\n");
						continue;
					}
					S_DBG("-- IN CASE4: blk_used = %d\n",local);
					dump_data(data,local,recv);
					break;

		 case 5:
					ls_imp(d_iptr,ibptr);
					break;

		default: 
					printf(" USAGE: Enter Valid input\n");
					break;
		}	
	}
 


	return 0;
}

void create_file(char *ibptr)
{
	int i,j,flag,dup_get_pos,res;
	flag = dup_get_pos = res = 0;
	in_ptr = ibptr;
	for(i = 0; i<128; i++) {
		for(j = 0; bit != 0; bit = bit >> 1,j++) {
			//DBG("J = %d\n", j);
			DBG("*in_ptr Before :");
			showbits(*in_ptr);
			DBG("*showbits      :");
			showbits(bit);
			res = *in_ptr & bit;
			//DBG("After res = %d\n",res);
			if((res == 0)&& (i != 128)) {
					*in_ptr |=  bit;   /*Set that bit in inode bitmap*/
					DBG("*in_ptr After  :");
					showbits(*in_ptr);
					get_pos = i * 8 + j; /*Get the bit postion */
					dup_get_pos = get_pos;
					DBG("get_pos(i*8+j) %d*%d+%d = %d\n",i,8,j,get_pos);
					flag = 1;
					break;
			}					
		}

		bit = 1 << 7;
		if(flag == 1){
				flag = 0;
				break;  
		}
		in_ptr = in_ptr + 1;
	}
	if(i == 128)
			printf("There is no free inode\n");


	d_iptr = iptr + (sizeof(struct inode) * dup_get_pos);
	fill_inode(d_iptr,dup_get_pos);




}



void clean_data_bitmap(struct inode *fiptr,unsigned int inod_rec, char *dbptr)
{
	
	int i;
	char name;
	unsigned byte, bits;
	byte = bits = 0;


	fiptr = fiptr + (sizeof(struct inode) * inod_rec);
	for(i = 0; i < (fiptr)->blk_used; i++) {
		DBG("------- In clean_data_bitmap() showbits of *dbptr are : ");
		showbits(*dbptr);
		DBG("\n");
		name = (fiptr)->blk[i];
		DBG("----name variable is %d\n",name);
		byte = name / 8;
		bits = name % 8;
		DBG("----byte = %d\n",byte);
		DBG("----bits = %d\n",bits);
		if((byte != 0) && (bits == 0))   {
			dbptr = dbptr + byte;
			DBG("--- I m in IF  of clean_data_bitmap()\n");
			*dbptr = *dbptr & (~(bit >> 0));
			DBG("----After Resetting bit in *dbptr\n");
			showbits(*dbptr);

		}
		else if((byte != 0)&& (bits != 0)){
			DBG("--- I m in ELSE IF  of clean_data_bitmap()\n");
			dbptr = dbptr + byte;
			*dbptr = *dbptr & (~(bit >> (bits - 1)));
			DBG("----After Resetting bit in *dbptr\n");
			showbits(*dbptr);
		
		}
		else {
			DBG("--- I m in ELSE of clean_data_bitmap()\n");
			*dbptr = *dbptr & (~(bit >> name));
			DBG("----After Resetting bit in *dbptr\n");
			showbits(*dbptr);
				
		
		}
		bit = 1 << 7;
		

	}


		

}


void del_data_blocks(struct inode *fptr,unsigned int inod_rec)
{
	int i;
	fptr = fptr + ((sizeof(struct inode) ) * inod_rec);
	DBG(" No. of data blocks used is %d\n",fptr->blk_used);
	for(i = 0; i < (fptr)->blk_used; i++) {
		DBG("------ Data block indexes are (fptr)->blk[%d] = %d\n",i,fptr->blk[i]);
	}
	for(i = 0; i < (fptr)->blk_used; i++) {
		(fptr)->blk[i] = 0;
		DBG("------ Data block indexes Set to ZERO are (fptr)->blk[%d] = %d\n",i,fptr->blk[i]);
	}
	fptr->blk_used = 0;
	memset(fptr->fname,0,5);
	DBG("------ File name is set to NULL--- %s\n",fptr->fname);
	DBG("------ INODE number of this inode is --- %d\n",fptr->i_no);
	fptr->i_no = 0;
	DBG("------ INODE number after setting Zero is  --- %d\n",fptr->i_no);
	
	

}

void ls_imp(struct inode *d_iptr, char *ibptr)
{
	int i,j,flag = 0;
	unsigned char res = 0;
	char *in_ptr = ibptr;
	for(i = 0; i<128; i++) {
			for(j = 0; bit != 0; bit = bit >> 1,j++) {
					res = *in_ptr & bit;
					if(res != 0) {
						get_pos = i * 8 + j;  /*Get the bit postion */
						flag = 1;
						S_DBG("get_pos(i*8+j) %d*%d+%d = %d\n",i,8,j,get_pos);
						file_names(iptr,get_pos);
					}
					else{
					} 
			}
			bit = 1 << 7;
			in_ptr = in_ptr + 1;
	}
	if(flag == 0)
		printf("==== No File Created ====\n");
}

void file_names(struct inode *d_iptr, int get_pos)
{
	d_iptr = (d_iptr + ((sizeof(struct inode)) * get_pos));
	DBG("===== Files Present Are: ");
	printf("------------> %s\n",(d_iptr)->fname);
}




void dump_data(char *ptr,int blk, int *recv)
{
	int i ;
	char *dup;
	S_DBG("----I m in dump_data()---\n");
	S_DBG("---- starting address of data is %p---\n",ptr);
	S_DBG("---- Blk_used = %d\n",blk);
	S_DBG("---- Address of array having indexes of block numbers = %p\n",recv);
	DBG("==== I M writing on Terminal ====\n");
	for(i = 0; i < blk; i++)
	{
		S_DBG(" value of recv[i] = %d\n",recv[i]);
		S_DBG(" Adding both  address is %p + %d\n",ptr,recv[i]);
		dup = ptr + (recv[i] * 1024);
		S_DBG(" Exact address is %p\n",dup);
		write(1,dup,1024);
	}

}

int *get_data_block_number(struct inode *ptr, unsigned int inod_rec, int data_blk[])
{
	ptr = ptr + (inod_rec * sizeof(struct inode));
	int i ;
	for(i = 0; i < 5; i++)
	{
		data_blk[i] = (ptr)->blk[i];
		S_DBG("Data indexes copied in data_blk[%d] = %d\n",i,(ptr)->blk[i]);	

	} 
	return data_blk;


}



void dummy_read(struct inode *temp)
{
	int i,j;
	DBG("Temp starting address is %p\n",temp);
	for(i=0; i < 5; i++)
	{
		DBG("(temp + %d)->i_no = %d\n",i,(temp)->i_no);
		DBG("(temp + %d)->blk_used = %d\n",i,(temp)->blk_used);
		DBG("(temp + %d)->fname = %s\n",i,(temp)->fname);
		for(j = 0; j < (temp)->blk_used; j++) {
			DBG("---allocated data blocks indexes are %d\n",(temp)->blk[j]);
		}
		temp = temp + sizeof(struct inode);
		S_DBG("Temp after SIZEOF address is %p\n",temp);
	}
		S_DBG("-------END & i =%d\n",i);
		
}

void update_data_block_in_inode(struct inode *udp, unsigned int inod_rec, unsigned int blk )
{
	int i;
	
	udp = udp + (inod_rec * sizeof(struct inode)); 
	

	DBG("++++++++++inode passed id %d && blk index passed is %d\n",inod_rec,blk);
	S_DBG("--- Printing available info of inode number: = %d\n",(udp)->i_no);
	S_DBG("--- Printing available info of file name  r: = %s\n",(udp)->fname); 
	S_DBG("&&&&&&&&&& z = %d & x=%d before loop is\n", z,x);
	for( i = 0; i < 5 ; i++) {
			if((((udp)->i_no) == 0) && (z == 0)){
				S_DBG("----YES inode is %d\n",udp->i_no);
				if((udp)->blk[i] == 0){
					S_DBG(" &&&&&&&& I m in if of if & i = %d\n",i);
					udp->blk[i] = blk;
					z++;
					break;
				}
			}
			else if((((udp)->i_no) == 0) && (z != 0)){
				S_DBG("&&&& I m in else if & z = %d\n",z);
				if((udp)->blk[0] == 0){
					S_DBG("&&&&&& I m in if of else if\n");
					--z;
					continue;
				
				}

			}
			else {
				S_DBG(" &&&&&&& I m in else & udp->blk[0] = %d\n",udp->blk[0]);
				//if(((udp)->blk[i] == 0) && (x == 0)) {
				if(((udp)->blk[0] == 0) && (x == 0)) {
					udp->blk[i] = blk;
					x++;
					S_DBG("****IN ELSE** updated data index is udp->blk[%d] = %d\n",i,blk);
					S_DBG("****X is now incremented to %d\n",x);
					break;

				}
				else if(((udp)->blk[0] == 0) && (x != 0))  {
					S_DBG(" &&&& I m in else if of else & value of i = %d\n",i);
					--x;
					continue;

				}
				else {
					if((udp)->blk[i] != 0) {
						S_DBG("&&& I m IF of else in update_data_block_in_inode()\n");
						continue;
					}
					else {
						udp->blk[i] = blk;
						S_DBG("&&& I m ELSE of ELSE in update_data_block_in_inode()\n");
						//DBG("ERROR: There is something wrong with your thinking\n");
						break;
					}


				}
			}

	}

//	DBG("----------------------------------------------------------\n");
	DBG("--- Saved value in udp->blk[%d] = %d\n",i,blk);
	DBG("--- Saving info. of number of data blocks allocated\n");
	(udp )->blk_used = (udp)->blk_used + 1;
	DBG("--- Saved info. of number of data blocks allocated := %d\n",(udp)->blk_used);
	

}

void init_inode_structure(struct inode *ptr)
{

	int i ;
	for(i = 0; i< 5; i++)
	{
		ptr->blk[i] = 0;
	}
	DBG("---In init_inode_structure() initiatized blk array with ZEROS\n");

}
char* get_data_block(char *ptr,unsigned ind )
{
	char *dup = ptr;
	dup = dup + (ind * 1024);
	DBG("We got memory for data at starting address: %p\n",dup);
	return dup;
}


int get_free_bit_in_datab(char *dbptr)
{
	int i,j,flag = 0,res = 0;
	in_ptr = dbptr;
	for(i = 0; i<128; i++) {
		S_DBG("----Checking Data block Bitmap for free bit---\n");
		DBG("bit    :");
		showbits(bit);
		for(j = 0; bit != 0; bit = bit >> 1,j++) {
			S_DBG("J = %d\n", j);
			DBG("*dbptr Before :");
			showbits(*in_ptr);
			DBG("*showbits      :");
			showbits(bit);
			res = *in_ptr & bit;
			if(res == 0) {
				*in_ptr |=  bit;   /*Set that bit in inode bitmap*/
				DBG("*dbptr After  :");
				showbits(*in_ptr);
				get_pos = i * 8 + j; /*Get the bit postion */
				DBG("get_pos(i*8+j) %d*%d+%d = %d\n",i,8,j,get_pos);
				flag = 1;
				break;
				}					
		}
						
		bit = 1 << 7;
		if(flag == 1){
			flag = 0;
			break;
		}
		in_ptr = in_ptr + 1;
	}
	if(i == 128)
		printf("There is no free data blocks\n");
				

	return get_pos;
				
}




int get_data()
{

	/*Decide that how much data we have to accept from user for 1 file*/
	char ch;
	unsigned int i;
	printf("Enter the data\n");
	for(i = 0;((ch = getchar()) != EOF); i++){
		store[i] = ch;
	}
	S_DBG("String so far is : %s\n",store);
	printf("\nTotal bytes recieved : %d\n",i-1);
	if(i == 0)
		return 0;
	else
		return i-1;
	
}

void add_free_inode(struct super_block *free_ptr)
{
	free_ptr->free_inodes = free_ptr->free_inodes + 1;
	DBG("***free inodes in super block is added by 1 ***\n");
	
}

void clean_ind_bitmap(char *f_clean_ibptr, unsigned int f_inod_rec)
{
	unsigned int byte,bits;
	unsigned bit = 1 << 7;
	byte = f_inod_rec / 8;
	bits = f_inod_rec % 8;
	DBG("---In clean_ind_bitmap() ---f_inod_rec = %d\n",f_inod_rec);
	DBG("Byte to access is = %d\n",byte);

	#if 1 
		DBG("----byte = %d\n",byte);
		DBG("----bits = %d\n",bits);
		if((byte != 0) && (bits == 0))   {
			f_clean_ibptr = f_clean_ibptr + byte;
			DBG("--- I m in IF  of clean_ind_bitmap()\n");
			*f_clean_ibptr = *f_clean_ibptr & (~(bit >> 0));
			printf("----After Resetting bit in *f_clean_ibptr\n");
			showbits(*f_clean_ibptr);

		}
		else if((byte != 0)&& (bits != 0)){
			DBG("--- I m in ELSE IF  of clean_ind_bitmap()\n");
			f_clean_ibptr = f_clean_ibptr + byte;
			*f_clean_ibptr = *f_clean_ibptr & (~(bit >> bits));
			printf("----After Resetting bit in *f_clean_ibptr\n");
			showbits(*f_clean_ibptr);
		
		}
		else {
			DBG("--- I m in ELSE of clean_ind_bitmap()\n");
			*f_clean_ibptr = *f_clean_ibptr & (~(bit >> bits));
			DBG("----After Resetting bit in *f_clean_ibptr\n");
			showbits(*f_clean_ibptr);
		}
#endif 

}
		
		
/* function to save filename into resp. inode table */
void fill_inode(struct inode *ftr,int index)
{
	printf("Enter name of file(max 8 char)\n");
	scanf("%s",name);
	strcpy((ftr)->fname,name);
	
	//strcpy((ftr->fname),(f_name));

	DBG("Name saved is %s\n",ftr->fname);

	ftr->i_no = index;
	DBG("Inode No. saved is %d\n", ftr->i_no);
	sub_free_inode(sptr);
	
	
	
}
void init_super(struct super_block *var)
{
	var->total_inodes = 1024;
	var->total_datablocks = 999;
	var->free_inodes = 1024;
	var->free_datablocks = 999;
	printf("***super block initialized***\n");
}
	
void sub_free_inode(struct super_block *free_ptr)
{
	free_ptr->free_inodes = free_ptr->free_inodes - 1;
	printf("***free inodes in super block is deducted by 1: remaining count is %d ***\n",free_ptr->free_inodes);
	
}

void sub_free_data_blocks(struct super_block *free_ptr)
{
	free_ptr->free_datablocks = free_ptr->free_datablocks - 1;
	printf("***free data blocks in super block is deducted by 1 ***\n");
}	

unsigned int  get_inode (struct inode *iptr, char del_name[8])
{
	int i,flag = 0;
	static unsigned int inode;
	//DBG("*** IN get_inode()** filename is %s\n",del_name);
	//DBG("*** IN get_inode()** structure is %s\n",(iptr + 65)->fname);
	for(i = 0; i < 1024; i++){
		if((strcmp((iptr + i)->fname,del_name)) == 0) 
		{
			printf("==== Same File Name found ====\n");
			inode = (iptr + i)->i_no;
			DBG("Inode number found is %d\n",inode);
			flag = 1;
			return inode;
 		}

	}
	S_DBG("*** i = %d\n",i);
	if(flag == 0)
		printf("====== I M SORRY!!! ====\n");
	return -2;
}


void showbits(char num)
{

    char bits = 8 * sizeof(char);
	while (bits){
		if( bits % 8 == 0 && bits != (sizeof(char) * 8) ){
			DBG("\t");

          }
          (num & (1<< bits - 1) ? DBG("1") : DBG("0") );
			bits--;
    }
	DBG("\n");
}




