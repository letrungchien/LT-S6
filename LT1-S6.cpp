#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
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
       a=0;
	}
	else{
		printf("so le la %d\n",a);
	}
	if(b%2==0){
      b=0;
	}
	else{
		printf("so le la %d\n",b);
	}
	if(c%2==0){
       c=0;
	}
	else{
		printf("so le la %d\n",c);
	}
	if(d%2==0){
        d=0;
	}
	else{
		printf("so le la %d\n",d);
	}
	if(e%2==0){
        e=0;
	}
	else{
		printf("so le la %d\n",e);
	}
	int tong=a+b+c+d+e;
	printf("tong cac so le la %d",tong);
	return 0;
}
