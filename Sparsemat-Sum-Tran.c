#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the no. of rows & columns: ");
    scanf("%d %d",&row ,&col);
	
    int matA[row][col], cArow = 0;
    printf("Enter the elements of the sparse matrix A: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){ 
          scanf("%d",&matA[i][j]);
              if(matA[i][j] != 0){
                  cArow++;
              }
	}
    }
	
    int matB[row][col], cBrow = 0;
    printf("Enter the elements of the sparse matrix B: ");
    for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){ 
	      scanf("%d",&matB[i][j]);
	      if(matB[i][j] != 0){
                  cBrow++;
              }
	}
    }
	
    printf("Sparse Matrix A:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){ 
	    printf("%d\t", matA[i][j]);
	}
	printf("\n");
    }
	
    printf("Sparse Matrix B:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){ 
	    printf("%d\t", matB[i][j]);
	}
	printf("\n");
    }
	
    int compA[cArow][3], r1 = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matA[i][j] != 0){
                compA[r1][0] = i;
                compA[r1][1] = j;
                compA[r1][2] = matA[i][j];
                r1++;
            }
        }
    }
    
    int compB[cBrow][3], r2 = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matB[i][j] != 0){
                compB[r2][0] = i;
                compB[r2][1] = j;
                compB[r2][2] = matB[i][j];
                r2++;
            }
        }
    }
    
    printf("Compact Matrix of Sparse Matrix A: \n");
    for(int a=0; a<cArow; a++){
        for(int b=0; b<3; b++){
            printf("%d\t", compA[a][b]); 
        }
        printf("\n");
    }
    
    printf("Compact Matrix of Sparse Matrix B: \n");
    for(int a=0; a<cBrow; a++){
        for(int b=0; b<3; b++){
            printf("%d\t", compB[a][b]); 
        }
        printf("\n");
    }
    
    
    int resultMat[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){ 
	       if(compA[i][j] == compB[i][j]){
	          resultMat[i][j] = compA[i][j] + compB[i][j];
	          
               }
	    }
	}
	
    return 0;
	
}

