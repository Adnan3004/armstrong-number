#include<stdio.h>
int main(){
	int a,d,c = 0,i,j,val,num = 1,count=0,b = 0,temp;
	printf("Enter the number: ");
	scanf("%d",&a);
	temp = a;
	while(a>0){
		count++;
		a = a/10;
	}
	a = temp;
	d = count+1;
	printf("\nnumber of digits: %d",count);
	for(i=1;i<=d;i++){
		val = a%10;
		a = a/10;
		num = 1;
		c = c+b;
		for(j=1;j<=count;j++){
			num = num*val;
			b = num;
		}
	}
	if(c==temp){
		printf("\nArmstrong number");
	}
	else{
		printf("\n%d",c);
	}
		return 0;
	}
		
	
		     
	

