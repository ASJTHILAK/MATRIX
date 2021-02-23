#include<stdio.h>
main()
{
	int matrix[3][3],i=0,j=0;
	printf("Input elements in the matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nelement - [%d],[%d] :",i,j);
		scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nThe matrix is : \n");
  	for(i=0;i<3;i++)
  	{	
      printf("\n");
      for(j=0;j<3;j++)
      {
        printf("%d\t",*(matrix[i]+j));   //I USED POINTER HERE
  	  }
  	}
 	printf("\n\nDiagonal elements: %d   %d   %d\n",matrix[0][0],matrix[1][1],matrix[2][2]);
 	printf("\nSum of Diagonal elements:  %d  ",matrix[0][0]+matrix[1][1]+matrix[2][2]);
 	return 0;
}
