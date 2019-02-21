#include<stdio.h>
#define T 10


typedef double Matri[T][T];
Matri A, B, C;
int ra, ca, rb, cb;


void leera(double M[][T]){
	int i, j;
	for (i=0;i<ra;i++){
		for (j=0;j<ca;j++){
			printf("Valor para %d,%d: ",i+1,j+1);
			scanf("%lf",&M[i][j]);
		}
	}
	system("cls");
}


void leerb(double M[][T]){
	int i, j;
	for (i=0;i<rb;i++){
		for (j=0;j<cb;j++)
		{
			printf("Valor para %d,%d: ",i+1,j+1);
			scanf("%lf",&M[i][j]);
		}
	}
	system("cls");
}


int suma(int x, int y){
	int r;
	r = x + y;
	return r;
}




int resta(int x, int y){
	int r;
	r = x - y;
	return r;
}


int mult(int x, int y){
	int r;
	r = x * y;
	return r;
}


int main(){
	system("color f0");
	printf("\n\t\t\tPrograma 14 Matrices");
	printf("\n\t\t\t____________________");
	printf("\n\tEste programa le ayudara a realizar operaciones basicas");
	printf("\n\t(suma, resta y multiplicacion) a dos matrices.");
	printf("\n\tRecuerde que para la suma y resta deben ser matrices");
	printf("\n\tcon el mismo numero de renglones y columnas y para la");
	printf("\n\tmultiplicacion el numero de filas de la primer matriz");
	printf("\n\tdebe ser igual al numero de renglones de la segunda. \1\n\n\n");
	
	system("pause");
	system("cls");
	int i, j, k, d, o, u;
	do{
		do{
			printf("Cuantos renglones para la matriz A: ");
			scanf("%d",&ra);
			printf("Cuantas columnas para la matriz A: ");
			scanf("%d",&ca);
			printf("Cuantos renglones para la matriz B:");
			scanf("%d",&rb);
			printf("Cuantas columnas para la matriz B: ");
			scanf("%d",&cb);
			while ((ra!=rb && ca!=cb && ca!=rb) || (ra!=rb && ra!=cb)){
				printf("\nNo es posible ninguna operacion con estas matrices.\n");
				printf(" Intenta de nuevo.\n\n");
				printf("Cuantos renglones para la matriz A: ");
			    scanf("%d",&ra);
				printf("Cuantas columnas para la matriz A: ");
				scanf("%d",&ca);
				printf("Cuantos renglones para la matriz B:");
				scanf("%d",&rb);
				printf("Cuantas columnas para la matriz B: ");
				scanf("%d",&cb);
			}
			printf("Introdusca valores para la matriz A.\n");
			leera(A);
			printf("Intordusca valores para la matriz B.\n");
			leerb(B);
			do{
				printf("La matriz A es:\n");
				for (i=0; i<ra; i++){
					printf("\t\263");
					for (j=0; j<ca; j++){
						printf(" %lf ", A[i][j]);
					}
					printf("\263");
					printf("\n");
				}
				printf("\nLa matriz B es:\n");
				for (i=0; i<rb; i++)
				{
					printf("\t\263");
					for (j=0; j<cb; j++)
					{
						printf(" %lf ", B[i][j]);
					}
					printf("\263");
					printf("\n");
				}
				if (ra==rb && ca==cb && ra==cb)
				{
					printf("\nQue desea hacer?\n");
					printf("Sumar=1\nRestar=2\nMultiplicar=3\n");
					scanf("%d",&d);
					while(d!=1 && d!=2 && d!=3)
					{
						printf("Opcion no valida.\n");
						printf("Sumar=1\nRestar=2\nMultiplicar=3\n");
					    scanf("%d",&d);
					}
					if (d==1)
					{
						for (i=0; i<ra; i++)
						{
							for (j=0; j<ca; j++)
							{
								C[i][j]=suma(A[i][j],B[i][j]);
							}
						}
						printf("El resultado de la suma es: \n");
						for (i=0; i<ra; i++)
						{
							printf("\t\263");
							for (j=0; j<ca; j++)
							{
								printf(" %lf ", C[i][j]);
							}
							printf("\263");
							printf("\n");
						}
					}
					else if (d==2)
					{
						for (i=0; i<ra; i++)
						{
							for (j=0; j<ca; j++)
							{
								C[i][j]=resta(A[i][j], B[i][j]);
							}
						}
						printf("El resultado de la resta es: \n");
						for (i=0; i<ra; i++)
						{
							printf("\t\263");
							for (j=0; j<ca; j++)
							{
								printf(" %lf ", C[i][j]);
							}
							printf("\263");
							printf("\n");
						}
					}
					else if (d==3)
					{
						for(i=0; i<ra; i++)
				        {
				            for(j=0; j<cb; j++)
				            {
				                C[i][j]=0;
				                for(k=0; k<ca; k++)
				                {
				                    C[i][j]=(C[i][j]+(mult(A[i][k],B[k][j])));
				                }
				            }
				        }
				        printf("El resultado de la multiplicacion es: \n");
						for (i=0; i<ra; i++)
						{
							printf("\t\263");
							for (j=0; j<cb; j++)
							{
								printf(" %lf ", C[i][j]);
							}
							printf("\263");
							printf("\n");
						}
				    }
			    }
			    else if (ra==rb && ca==cb)
			    {
			    	printf("Que desea hacer?\n");
					printf("Sumar=1\tRestar=2\t");
					scanf("%d",&d);
					while (d!=1 && d!=2)
					{
						printf("Opcion no valida.\n");
						printf("Que desea hacer?\n");
						printf("Sumar=1\tRestar=2\t");
						scanf("%d",&d);
					}
					if (d==1)
				    {
						for (i=0; i<ra; i++)
						{
							for (j=0; j<ca; j++)
							{
								C[i][j]=suma(A[i][j],B[i][j]);
							}
						}
						printf("El resultado de la suma es: \n");
						for (i=0; i<ra; i++)
						{
							printf("\t\263");
							for (j=0; j<ca; j++)
							{
								printf(" %lf ", C[i][j]);
							}
							printf("\263");
							printf("\n");
						}
				    }
					else if (d==2)
					{
						for (i=0; i<ra; i++)
						{
							for (j=0; j<ca; j++)
							{
								C[i][j]=resta(A[i][j], B[i][j]);
							}
						}
						printf("El resultado de la resta es: \n");
						for (i=0; i<ra; i++)
						{
							printf("\t\263");
							for (j=0; j<ca; j++)
							{
								printf(" %lf ", C[i][j]);
							}
							printf("\263");
							printf("\n");	
					    }
				    }
			    }
			    else if (ca==rb)
			    {
			    	printf("\nCon estos tipos de matriz solo se puede realizar la multiplicacion.\n");
			    	for(i=0; i<ra; i++)
			        {
			            for(j=0; j<cb; j++)
			            {
			                C[i][j]=0;
			                for(k=0; k<ca; k++)
			                {
			                    C[i][j]=(C[i][j]+(mult(A[i][k],B[k][j])));
			                }
			            }
			        }
			        printf("\nEl resultado de la multiplicacion es: \n");
					for (i=0; i<ra; i++)
					{
						printf("\t\263");
						for (j=0; j<cb; j++)
						{
							printf(" %lf ", C[i][j]);
						}
						printf("\263");
						printf("\n");
					}
			    }
			    printf("\nDesea repetir el programa?");
			    printf("\tSi=1\tNo=0\t");
			    scanf("%d",&o);
				while (o!=0 && o!=1)
				{
				    printf("Opcion no valida intente de nuevo.\n");
				    printf("Desea repetir el programa?");
				    printf("\tSi=1\tNo=0\t");
				    scanf("%d",&o);
				}
				if (o==1)
			    {
			    	u=0;
				    printf("Desea introducir nuevos valores o continuar con los mismos?\n");
				    printf("\tNuevos=1\tMismos=2\t");
				    scanf("%d",&u);
				    while (u!=1 && u!=2)
				    {
				    	printf("Opcion no valida intente de nuevo.\n");
				    	printf("\tNuevos=1\tMismos=2\t");
				        scanf("%d",&u);
				    }
			    }
			    system("cls");
		    }while (u==2);
	    }while (u==1);
    }while (o==1);
	return 0;
}
