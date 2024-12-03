#include<stdio.h> 

int main(){
	int n;
	int number; 
	int arr[100][100]; 

	while(1){
		int minus=1; 
		int total;
		printf("\n                     MENU                  \n");
        printf("\n   1. Nhap kich co can nhap va cac gia tri phan tu:\n");
        printf("\n   2. In ra gia tri cac phan tu mang theo ma tran:\n");
        printf("\n   3. In ra cac phan tu nam tren duong bien va tinh tich:\n");
        printf("\n   4. In ra cac phan tu nam tren duong cheo chinh:\n");
        printf("\n   5. In ra cac phan tu nam tren duong cheo phu:\n");
        printf("\n   6. Sap sep cac duong cheo chinh theo thu tu tang dan:\n");
        printf("\n   7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang:\n");
        printf("\n   8. Thoat.\n");  
        printf("\nLua chon cua ban la : ");
        scanf("%d", &n);
		
	    switch(n){
	    	case 1:
	    		printf("Nhap kich co cua mang: ");
				scanf("%d", &number);
				printf("Nhap cac phan tu cho ma tran: \n");
				for(int i=0;i<number;i++){
					for(int j=0;j<number;j++){
						printf("Phan tu ar[%d][%d]=", i, j);
						scanf("%d", &arr[i][j]); 
					} 
				} 
			break;
			
			case 2:
				printf("Gia tri cac phan tu trong mang lan luot la:\n");
				for(int i=0;i<number;i++){
					for(int j=0;j<number;j++){
						printf("  %d  ", arr[i][j]);
					}
					printf("\n"); 
				}
			break;
			
			case 3:
				printf("Cac phan tu tren duong bien: ");
				for(int i=0;i<number;i++){
					for(int j=0;j<number;j++){
						if(i==0 || i==number-1 || j==0 || j==number-1){
							printf("%d ", arr[i][j]);
							minus *= arr[i][j]; 
						} 
					} 
				} 
				printf("\nTich cac phan tu duong bien: %d\n", minus);
			break;
			
			case 4:
				printf("Cac phan tu duong cheo chinh: ");
				for(int i=0;i<number;i++){
					printf("%d ", arr[i][i]); 
				} 
				printf("\n"); 
			break;
					
			case 5:
				printf("Cac phan tu duong cheo phu: ");
				for(int i=0;i<number;i++){
					printf("%d ", arr[i][number-1-i]); 
				} 
				printf("\n");
			break;
			
			case 6: 
				printf("Cac phan tu duong cheo chinh ban dau: ");
                for(int i=0;i<number;i++){
                    printf("%d ", arr[i][i]); 
                }
   
                for(int i=0;i<number-1;i++){
                    for(int j=i+1;j<number;j++){
                        if(arr[i][i] > arr[j][j]){
                            int temp = arr[i][i];
                            arr[i][i] = arr[j][j];
                            arr[j][j] = temp;
                        }
                    }
                }

                printf("\nCac phan tu duong cheo chinh sau khi sap xep: ");
                for(int i = 0; i < number; i++){
                     printf("%d ", arr[i][i]); 
                }
                printf("\n");
			break;
			 
			case 7: 
			    printf("Nhap phan tu can tim: ");
                int value;
                scanf("%d", &value);
    
                int flag = -1; 
             
                for(int i = 0; i < number; i++){
                    for(int j = 0; j < number; j++){
                        if(arr[i][j] == value){
                            flag = 1;  
                           break;  
                        }
                    }  
                }
                int i, j; 
                if(flag != -1){
                	for(int i = 0; i < number; i++){
                    for(int j = 0; j < number; j++){
                        if(arr[i][j] == value){
                            printf("CO PHAN TU TAI VI TRI : [%d][%d]", i, j); 
                        }
                    }  
                }
                } else {
                	printf("KHONG CO PHAN TU "); 
				} 
            break;
			 
			case 8:
				printf("Thoat chuong trinh.");
				return 0; 
			break;
			
			default :
			    printf("Lua chon khong hop le. Vui long chon lai.\n"); 
     	}	
	} 
	
	return 0; 
} 
