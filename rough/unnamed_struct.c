#pragma pack(1)
struct uma{

		int b:1;
		char:0;	
		int x :1;
		char c:1;
	/*	int v:30;
		char i:5;
		char:0;*/
	

};//__attribute((packed,aligned(2)))__;
main()
{
		struct uma lo;
		printf("%d\n",sizeof(lo));
}
