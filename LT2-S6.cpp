#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	int chan=0;
	int le=0;
	printf("moi nhap so nguyen thu nhat\n");
	scanf("%d",&a);
	printf("moi nhap so nguyen thu hai\n");
	scanf("%d",&b);
	printf("moi nhap so nguyen thu ba\n");
	scanf("%d",&c);
	printf("moi nhap so nguyen thu tu\n");
	scanf("%d",&d);
	printf("moi nhap so nguyen thu nam\n");
	scanf("%d",&e);
	
	if(a % 2 == 0){
       chan++;
	}
	else{
	    le++;
	}
	if(b%2==0){
      chan++;
	}
	else{
    	le++;
	}
	if(c%2==0){
      chan++;
	}
	else{
		le++;
	}
	if(d%2==0){
        chan++;
	}
	else{
		le++;
	}
	if(e%2==0){
        chan++;
	}
	else{
		le++;
	}
	printf("co so %d so le\n",le);
	printf("co so %d so chan\n",chan);
	
	return 0;
}
