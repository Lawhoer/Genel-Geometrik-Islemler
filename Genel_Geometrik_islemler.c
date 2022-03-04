#include <stdio.h>

void ters_ucgen() {
	
int sayi,i,a,b;

    printf("\n  Bir sayi giriniz = ");
	scanf("%d",&sayi);
	printf("\n");

for(i=1;i<=sayi;i++){
	for(a=1;a<=(sayi-i);a++)
	{
		printf(" ");		
	}
    for(a;a<=sayi;a++) 
		{
			printf("*");
			if(a==sayi)
			{
				printf("\n");
			}
		}
}
}

void kare() {
	
int istek,i,a;

    printf("\n  Bir sayi giriniz = ");
	scanf("%d",&istek);
	printf("\n");


for(i=1;i<=istek; i++){
       if(i == 1 || i == istek)
	{	   
       for(a=1; a<=istek; a++)
       {
       	if(a==1)
       	printf(" |");
       	if(a<=istek)
       	  printf("--");
       	if(a==istek)
       	  printf("|\n");
	   }
   }
       if(i>1 && i<istek)
   {
         for(a=1; a<=istek; a++)
       {
       	if(a==1)
       	printf(" |");
       	if(a<=istek)
       	  printf("  ");
       	if(a==istek)
       	  printf("|\n");
	   }    
   }  
}
}

void ucgen() {
	
	int i,a,s;
	
	printf("\n  Bir sayi giriniz = ");
	scanf("%d",&i);
	printf("\n");
	
	for(s=1; s<=i; s++){
		printf(" ");
		for(a=1;a<=s;a++){
			printf("*");
		}
		printf("\n");		
	}
}



int main () 
{
	int isteksayi;
	
    printf("  ___________________ \n");
    printf(" |                   | \n");
    printf(" | 1) Tuhaf Ucgen    | \n");
    printf(" | 2) Kare           | \n");
    printf(" | 3) Dik Ucgen      | \n");
    printf(" |___________________| \n");
	printf("\n  Hangisini istersin? : ");
	scanf("%d",&isteksayi);
	printf(" ________________________\n");
	
	switch(isteksayi)
	{
		case 1:
			ters_ucgen();
			break; 
		
		case 2:
			kare();
			break; 
		
		case 3:
			ucgen();
			break; 					
	}		
}
