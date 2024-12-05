#include<stdio.h>
#include <stdlib.h> 
int main(){
	int n,m;
	int count=0; 
	int mulArray[n][m] ;
	int temp; 
	printf ("nhap so dong cua mang hai chieu:") ;
	scanf("%d", &n);
	printf("nhap so cot cua mang hai chieu :") ;
	scanf("%d", &m) ;
	int numbers[n][m] ;
	 
    do{
		printf("************************MENU**************************\n"); 
		printf("1,nhap cac gia tri phan tu cua mang\n");
		printf("2,in cac gia tri cua bang theo ma tran\n") ;
		printf("3,tinh gia tri phan tu le chia het cho 5\n") ;
		printf("4,in ra cac phan tu co gia tri lon nhat , nho nhat nam tren duong bien , duong cheo chinh, duong cheo phu\n");
		printf("5,Su dung thuat toan sap xep cac phan tu giam dan theo dong cua mang\n") ;
		printf("6,tong cac phan tu la so nguyen to cua mang\n");
		printf("lua chon cua ban :\n") ;
		int choice;
		scanf("%d", &choice) ;
		switch (choice) {
			case 1 :
				printf("nhap cac gia tri phan tu cua mang\n :") ;
				for(int i=0; i<n ; i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
				}
			}
				
			break; 
			case 2 :
				printf("nhap cac gia tri phan tu cua mang\n ") ;
				for(int i=0; i<n ; i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					
				}
				printf("\n") ;
			}
			printf("\n") ;
			break;
			case 3 :
				for(int i=0;i<n;i++){
					for(int j = 0;j<m;j++){
						if(mulArray[i][j] % 2 !=0  && mulArray[i][j] %5 ==0){
							count++;
						}
					}
				}
				printf("So phan tu le chia het cho 5 la: %d\n",count);
				break;
			case 4 :
			break;
			case 5 :
			for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						for(int k=j+1;k<m;k++){
							if(mulArray[i][j]<mulArray[i][k]){
								temp=mulArray[i][j];
								mulArray[i][j]=mulArray[i][k];
								mulArray[i][k]=temp;
							}
						}
					}
				}
				for(int i=0;i<n;i++){
					printf("\nMang sap xep tu lon den be hang %d la:\t",i);
					for(int j=0;j<m;j++){
						printf("%10d",mulArray[i][j]);
					
				}
					
				}
					
						
			
			 
			case 6 :
			    break; 
			case 9:
		        exit(0);
		    default :
		    	printf ("vui long nhap tu 1-9\n") ;
			 
		} 
		
	} while(1==1) ;
		
	

}
