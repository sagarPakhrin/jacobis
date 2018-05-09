#include<stdio.h>

int main(){
			int i, choice,iteration;
			int a[3], b[3], c[3], d[3];
			float x,y,z,tempx,tempy,tempz,X,Y,Z;
			printf("Select 1 for Jacobi's method and 2 for Gauseidal's method\n");
			scanf("%d",&choice);

			switch(choice){
					case 1:
							for (i = 0; i < 3; i++) {
									printf("Enter value for equation %d enter the value of ax + by + cz + = d :\n",i);
									printf("a= ");
									scanf("%d",&a[i]);
									printf("b= ");
									scanf("%d",&b[i]);
									printf("c= ");
									scanf("%d",&c[i]);
									printf("d= ");
									scanf("%d",&d[i]);

							}
							for (i = 0; i < 3; i++) {
								printf("%dx + %dy + %dz = %d\n",a[i],b[i],c[i],d[i]);
							}
							printf("How many iteratins do you want to see: ");
							scanf("%d",&iteration);
							printf("Enter the initial value of x,y,z\n");
							printf("x= ");
							scanf("%f",&x);
							printf("y= ");
							scanf("%f",&y);
							printf("z= ");
							scanf("%f",&z);
							for (i = 0; i < iteration; i++) {
									tempx = (d[1] -1* ( c[1]*z  )-1* ( b[1]*y ))/a[1];
							//		tempy = (d[2] -1* ( c[2]*z ) -1* ( a[2]*x ))/b[2];
							//		tempz = (d[3] -1* ( b[3]*y ) -1* ( a[3]*x ))/c[3];
									x=tempx;
							//		y=tempy;
							//		z=tempz;
									printf("\nIteration \t    x\t \t    y \t\t    z\n");
									printf("%d \t\t %.4f \t %.4f \t %.4f",i+1,x,y,z);
							}
					case 2:
					default:
							break;

			}

}
