#include <stdio.h>
int main(){
	int rows, cols;
	int choice;
	int arr[100][100];
	do{
		printf("---MENU---\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("5. In ra cac phan tu nam tren duong cheo phu\n");
		printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
		printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("8. Thoat khoi chuong trinh\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				printf("Moi ban nhap vao so hang: ");
				scanf("%d", &rows);
				printf("Moi ban nhap vao so cot: ");
				scanf("%d", &cols);
				printf("Moi ban nhap cac phan tu cho mang:\n");
			
				for(int i=0;i<rows;i++){
					for(int j=0; j<cols;j++){
						printf("Phan tu vi tri [%d][%d]: ",i,j);
						scanf("%d",&arr[i][j]);
					}
				}
				
			break;
			case 2:
				printf("Ma tran sau khi them phan tu la:\n");
				for(int i=0;i<rows;i++){
					for(int j=0; j<cols;j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
			break;
			case 3: 
				if(rows>0 && cols>0){
					long long result =1;
					for(int i=0;i<rows;i++){
						for(int j=0; j<cols; j++){
							if(i==0||i==rows-1||j==0||j==cols-1){
								printf("%d\t", arr[i][j]);
								result= result * arr[i][j];
							}else{
								printf("\t");
							}
						}
						printf("\n");
					}
					printf("Tich cac phan tu bien la: %lld\n", result);
				}else{
					printf("Vui long nhap lai kich co cua mang\n");
				}
			break;
			case 4: 
				if(rows>0 && cols>0 && rows ==cols){
					printf("Cac phan tu tren duong cheo chinh:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i][i]);
                    }
                    printf("\n");
				}else{
					printf("Ma tran khong ton tai duong cheo chinh");
				}
			break;
			case 5: 
				if(rows>0 && cols>0 && rows ==cols){
					printf("Cac phan tu tren duong cheo phu:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i][rows-i-1]);
                    }
                    printf("\n");
				}else{
					printf("Ma tran khong ton tai duong cheo phu\n");
				}
			break;
			case 6:
				if(rows>0 && cols>0 && rows ==cols){	
                    for (int i = 0; i < rows; i++) {
                        for(int j=i+1;j<cols;j++){
                        	if(arr[i][i]>arr[j][j]){
                        		int temp = arr[i][i];
                        		arr[i][i]=arr[j][j];
                        		arr[j][j]=temp;
							}
						}
                    }
                	printf("Duong cheo chinh sau khi sap xep tang dan:\n");
				        for (int i = 0; i < rows; i++) {
				            printf("%d ", arr[i][i]);
				        }
				    printf("\n");
				}else{
					printf("Ma tran khong ton tai duong cheo chinh\n");
				}
			break;
			case 7:
				int  searchValue;
				printf("Moi ban nhap gia tri muon tim kiem: ");
				scanf("%d",&searchValue);
				for(int i=0;i<rows;i++){
					for(int j=0;j<cols;j++){
						if(arr[i][j]=searchValue){
							printf("Vi tri phan tu tim kiem la arr[%d][%d]\n", i,j);
							break;
						}else{
							printf("Khong tim thay phan tu can tim\n");
						}
					}
				} 
			break;
			case 8: 
				printf("Thoat khoi chuong trinh\n");
			break;
			default:
				printf("Vui long lua chon lai\n");
		}
	}while(choice!=8);
	return 0; 
}
