#/*propreitary of umaraZ Inc written for GLOBALEDGESOFT p LTD */
#
##include	<uma.h>
#
#int b_search(int a[],int low,int high,int tar)
#{
#		int mid;
#		if(low<=high){
#
#				mid=(low+high)/2;
#
#				if(a[mid]==tar){
#
#						printf("element found in the array\n");
#
#						return 0;
#				}
#				if (a[mid]<tar)
#
#						b_search(a,mid+1,high,tar);
#
#				else
#
#						b_search(a,low,mid,tar);
#
#		}
#		else
#				printf("element not found\n");
#		return 0;
#}

