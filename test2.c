#include<stdio.h>  
#include<stdlib.h>

double findV(double V[3][3],double I[3][3],double R[3][3])
{
	int i,j,k;
	double sum=0;
	printf("\nEnter elements of Current matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&I[i][j]);
		}
	}
	
	printf("\nEnter elements of Resistance matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&R[i][j]);
		}
	}
	
	printf("\nCurrent matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",I[i][j]);
		}
		printf("\n");
	}
	
	printf("\nResistance matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",R[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum = sum + (I[i][j] * R[j][k]);
			}
			V[i][j] = sum;
			sum = 0;
		}
	}
	printf("\nVoltage matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",V[i][j]);
		}
		printf("\n");
	}
}

void findI(double V[3][3],double I[3][3],double R[3][3])
{
	int i,j,k;
	double sum=0;
	printf("\nEnter elements of Voltage matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&V[i][j]);
		}
	}
	
	printf("\nEnter elements of Resistance matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&R[i][j]);
		}
	}
	
	printf("\n Voltage matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",V[i][j]);
		}
		printf("\n");
	}
	
	printf("\nResistance matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",R[i][j]);
		}
		printf("\n");
	}
	//===================
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			I[i][j] = (V[i][j] / R[i][j]);
		}
	}
	printf("/nCurent matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",I[i][j]);
		}
		printf("\n");
	}
	
	
}


findR(double V[3][3],double I[3][3],double R[3][3])
{
	int i,j,k;
	double sum=0;
	printf("\nEnter elements of Voltage matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&V[i][j]);
		}
	}
	
	printf("\nEnter elements of Current matrix  : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter row No. %d: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%lf",&I[i][j]);
		}
	}
	
	printf("\n Voltage matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",V[i][j]);
		}
		printf("\n");
	}
	
	printf("\nCurrent matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",R[i][j]);
		}
		printf("\n");
	}
	//========================
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			R[i][j] = (V[i][j] / I[i][j]);
		}
	}
	printf("/nResistance matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2lf ",R[i][j]);
		}
		printf("\n");
	}
}

double scan_I_R(double V[3][3],double I[3][3],double R[3][3])
{
	int i,j;
	printf("\nEnter elements of Current matrix  : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&I[i][j]);
		}
	}
	printf("\nCurrent matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",I[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nEnter elements of Resistance matrix  : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&R[i][j]);
		}
	}
	printf("\nResistance matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",R[i][j]);
		}
		printf("\n");
	}
	
}
 
int main()
{
	int n;
	int choice;
	int i,j,k,sum = 0;
	
	double Voltage[3][3];
	double Current[3][3];
	double Resistance[3][3];
	printf("\nWhat do u want to find?\n");
	printf("\nEnter 1 for Voltage\nEnter 2 for Current\nEnter 3 for resistance\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : findV(Voltage,Current,Resistance);
				 break;
		case 2 : findI(Voltage,Current,Resistance);
				 break;
		case 3 : findR(Voltage,Current,Resistance);
				 break;
		default : printf("Wrong input!!");
	}
	
	return 0;
}
