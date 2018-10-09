#ifndef _HEAD_
#define _HEAD_

#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h> 
#include<string.h> 

#if DEBUG
	#define DBG  printf
#else
	#define DBG
#endif

#if S_DEBUG
	#define S_DBG  printf
#else
	#define S_DBG
#endif

struct super_block {
	unsigned int total_inodes;
	unsigned int total_datablocks;
	unsigned int free_inodes;
	unsigned int free_datablocks;
};

struct inode {
	unsigned int i_no : 10;
	unsigned int size : 12;
	unsigned int blk_used : 3;
	unsigned short int blk[5];
	unsigned char fname[8];
};

void create_file(char *ibptr);
void fill_inode(struct inode *ftr,int index);
void init_super(struct super_block *var);
void sub_free_inode(struct super_block *free_ptr);
unsigned int get_inode (struct inode *iptr, char del_name[8]);
void clean_ind_bitmap(char *clean_ibptr, unsigned int inod_rec);
void add_free_inode(struct super_block *free_ptr);
int get_data();
char* get_data_block(char *ptr,unsigned ind );
void update_data_block_in_inode(struct inode *udp, unsigned int inod_rec, unsigned int blk );
void sub_free_data_blocks(struct super_block *free_ptr);
void dummy_read(struct inode *temp);
void init_inode_structure(struct inode *ptr);
int *get_data_block_number(struct inode *ptr, unsigned int inod_rec, int data_blk[]);
void dump_data(char *ptr,int blk, int *recv);
void file_names(struct inode *d_iptr, int get_pos);
void ls_imp(struct inode *d_iptr, char *ibptr);
void del_data_blocks(struct inode *fptr,unsigned int inod_rec);
void clean_data_bitmap(struct inode *fiptr,unsigned int inod_rec, char *dbptr);
void showbits(char num);


char name[8];
char del_name[8];

struct super_block *sptr;
struct inode *iptr,*d_iptr,*dd_iptr;            // commented on 5-June
//struct inode iptr[1024],d_iptr[1024];

char store[8192];  /*Need to decide what could be the max. limit of buffer*/
char *d_store;

//int i,j;
char *in_ptr;
unsigned char byte,bit = 1 << 7;
unsigned int bits;
int get_pos,local;
int data_blk[5];
int *recv;

static int x ,z;





#endif
