#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//   HW2 - MERYEM AZREG - 2010213515
	//   1) That will read the two sides of a rectangle and calculate its area and perimeter.

	
/*	int a,b,ar,p;
	printf("enter the shor side of r :");
	scanf("%d",&a);
	printf("enter the long side of r :");
	scanf("%d",&b);
	
	ar=a*b;
	p=2*(a+b);
	
	printf("the ar is %d and the p is %d",ar,p);                   
	
	return 0;
}                             */
	
	
	//-----
	
	
/*	int a,b,ar,p;
	printf("enter the shor side of r :");
	scanf("%d",&a);
	printf("enter the long side of r :");
	scanf("%d",&b);
	

    r(a,b,ar,p);
	
	return 0;
}
	
	int r(int x, int y, int z, int w){
		
		z=x*y;
		w=2*(x+y);
	
	printf("the ar is %d and the p is %d",z,w);
	
	
		
	}              */
	
	
	
	//-----
	
	
	//   2) Find all the roots of a quadratic equation ax^2+bx+c=0
	
/*	float a,b,c,D,X1,X2;
	
	printf("enter the a :");
	scanf("%f",&a);
	
    printf("enter the b :");
	scanf("%f",&b);
	
	printf("enter the c :");
	scanf("%f",&c);
	
	D=sqrt(b*b-4*a*c);
	X1=(-b+D)/(2*a);
	X2=(-b-D)/(2*a);
	
	printf("the x1 is : %.2f and the x2 is : %.2f",X1,X2);
	
	return 0;
}                       */

    
    //-----
    
    
 /*   int a,b,c,D,X1,X2;
	
	printf("enter the a :");
	scanf("%d",&a);
	
    printf("enter the b :");
	scanf("%d",&b);
	
	printf("enter the c :");
	scanf("%d",&c);
	
	
	rt(a,b,c,D,X1,X2);
	
	return 0;
}
	
	int rt(int x,int y,int z,int w, int q, int k){
		
	w=sqrt(y*y-4*x*z);
	q=(-y+w)/(2*x);
	k=(-y-w)/(2*x);
	
	printf("the x1 is : %d and the x2 is : %d",q,k);
		
	}                          */
	
	
	
	//-----
	
	
	//   3) Print Hello World 10 times
	
	
/*	int c=1;
	
	while(c<=10){
	
	   printf("%d> Hello World\n",c);
	   c++;
}
	return 0;
}              */
   
   
   
 /*  int c=1;
   
   pr(c);
   
   return 0;
}
   int pr(int x){
   	while(x<=10){
	
	   printf("%d> Hello World\n",x);
	   x++;
   }
}              */
   
   
   
   //-----
   
   
   // 4) Find the sum of the first 50 natural numbers
   
   
 /*  int c,sum=0;
   for(c=0;c<50;c++){
   	sum=sum+c;
   }
   printf("sum > %d ",sum);

   return 0;
}                       */


   //-----
   
   
/*   int c,sum=0;
   
   //sm(c,sum);
    
   printf("sum > %d ",sm(c,sum));
   return 0;
}
   int sm(int x, int y){
   	for(x=0;x<50;x++){
   	y=y+x;
   }
  // printf("sum > %d ",y);
   	return y;
   }               */
   
   
   //-----
   
   
   //   5) Calculate 2^4
   
   
 /*  int a=2,b=4,result;
   
   
     result= pow(a,b);
   
     printf("%d raised to the power of %d is %d",a,b,result);
   
     return 0;
}                */

    
    //-----
    
    
 /*   int a=2,b=4,result;
    
    printf("2 raised to the power of 4 is %d",pw(a,b,result));
    
    return 0;
}
    int pw(int x, int y, int z){
    	z=pow(x,y);
    	
    	return z;
	}               */
	
	
	
	//-----
	
	
	//   6) To find LCM of two numbers
	
	
/*	int a,b,max;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	if(a>b)
	  max=a;
	else
	  max=b;
	  
	while(1){
		if(max%a==0 && max%b==0){
			printf("the LCM of %d and %d is %d",a,b,max);
			break;
		}
		max++;
	}    
	
	return 0;
}             */



    //-----
    
    
/*    int a,b,max;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	okek(a,b,max);
	
	return 0;
}

    int okek(int x,int y,int z){
    		if(x>y)
	  z=x;
	else
	  z=y;
	  
	while(1){
		if(z%x==0 && z%y==0){
			printf("the LCM of %d and %d is %d",x,y,z);
			break;
		}
		z++;
	}    
	}               */
	
	
	
	//-----
	
	
	//   7) Find prime numbers 1 to n
	
	
	
/*	int n,i,j,c;
    printf("Enter the num :");
    scanf("%d",&n);
    printf("Prime nums are: \n");
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("%d ",i);
    }
    
    return 0;
}              */



    //-----
	
	
/*	int n,i,j,c;
    printf("Enter the num :");
    scanf("%d",&n);
    printf("Prime nums are: \n");  
    
    prm(n,i,j,c);
    
    return 0;
}

    int prm(int x, int y, int z, int w){
    	for(y=1;y<=x;y++)
    {
        w=0;
        for(z=1;z<=x;z++)
        {
            if(y%z==0)
                w++;
        }
        if(w==2)
            printf("%d ",y);
    }
    	
	}                       */
	
	
	
	//-----
	
	
	
	//   8)  Find sum of all prime numbers between 1 to n
	
	
/*	int n,i,j,c,sum=0;
    printf("Enter the num :");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2){
		    sum+=i;
           
        }
      
    }
    printf("sum : %d",sum);
    return 0;
}              */



    //-----
     
     
/*     int n,i,j,c,sum=0;
     printf("Enter the num :");
     scanf("%d",&n);
     smprm(n,i,j,c,sum);
     
     return 0;
 }
     
     int smprm(int x, int y, int z, int w, int q){
     	
     	for(y=1;y<=x;y++)
    {
        w=0;
        for(z=1;z<=x;z++)
        {
            if(y%z==0)
                w++;
        }
        if(w==2){
		    q+=y;
           
        }
      
    }
    printf("sum : %d",q);
     	
     	
	 }                */

    
    
     //-----
     
     
     
     
     //   9) Check whether a number is Armstrong number or not
     
     
     
/*     int n,a,b,c,sum=0;
    printf("Enter the num: ");
    scanf("%d",&n);
    a=n;

        while(a!=0)
        {
            b=a%10;
            c=pow(b,3);
            sum+=c;
            a=a/10;
        }

        if(sum==n)
            printf("Armstrong");
        else
            printf("Not Armstrong");
            
   return 0;         
}             */



    //-----
    
    
 /*   int n,a,b,c,sum=0;
    printf("Enter the num: ");
    scanf("%d",&n);
    a=n;
    
     
    arm(n,a,b,c,sum);
    
    return 0;
}
    
    int arm(int x, int y,int z, int w, int q){
    	
    	while(y!=0)
        {
            z=y%10;
            w=pow(z,3);
            q+=w;
            y=y/10;
        }

        if(q==x)
            printf("Armstrong");
        else
            printf("not Armstrong");
            
    	
	}                         */
	
	
	
	//-----
	
	
	
	//   10) Print all Armstrong numbers between 1 to n
	
	
	
/*	 int d=1,a,c,sum=0,n;
    printf("Enter the num: ");
    scanf("%d",&n);

    while(d<=n){
    a=d;

    while(a!=0){
        c=pow(a%10,3);
        sum+=c;
        a=a/10;
    }
    if(sum==d){
        printf("%d ",d);
    }
    d++;
    sum=0;
}

return 0;

}          */
    
	
	
	//-----
	
	
/*	 int d=1,a,c,sum=0,n;
    printf("Enter the num: ");
    scanf("%d",&n);
    alarm(d,a,c,sum,n);
    
    return 0;
}

    int alarm(int x, int y, int w, int q, int k){
    	 while(x<=k){
    y=x;

    while(y!=0){
        w=pow(y%10,3);
        q+=w;
        y=y/10;
    }
    if(q==x){
        printf("%d ",x);
    }
    x++;
    q=0;
}
	}             */
	
	
	//   11) Check whether a number is Perfect number or not
	
	
/*	int c=1,sum=0,n;
	printf("enter the n :");
	scanf("%d",&n);
	
	while(c<n){
		if(n%c==0){
		
		  sum+=c;
	
		  
	}
	c++;
}
	if (sum==n){
		printf(" it s a perf num");
	}
	else
	   printf("it s not a perf num");
	 
	 
	 return 0;            
}              */


     
    //-----
    
    
/*  int c=1,sum=0,n;
	printf("enter the n :");
	scanf("%d",&n);
	
	prf(c,sum,n);
	
	return 0;
}

    int prf(int x, int y, int z){
    	
    		while(x<z){
		if(z%x==0){
		
		  y+=x;
	
		  
	}
	x++;
}
	if (y==z){
		printf(" it s a perf num");
	}
	else
	   printf("it s not a perf num");
	 
	}          */
	
	
	
	//-----



	//   12) Print all Perfect numbers between 1 to n
	
	
/*	int i,j,n,sum;

    printf("Enter the n: ");
    scanf("%d",&n);

    printf("Perfect nums between 1 to %d:\n",n);
    
    for(i=1;i<=n;i++)
    {
        sum=0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
 
        if(sum==i)
        {
            printf("%d  ",i);
        }
    }

    return 0;
}          */


    
    //-----
    
    
/*    int i,j,n,sum;

    printf("Enter the n: ");
    scanf("%d",&n);

    prf(i,j,n,sum);
    
    return 0;
}
    
    int prf(int x, int y, int z, int w){
    	  printf("Perfect nums between 1 to %d:\n",z);
    
    for(x=1;x<=z;x++)
    {
        w=0;

        for(y=1;y<x;y++)
        {
            if(x%y==0)
            {
                w+=y;
            }
        }
 
        if(w==x)
        {
            printf("%d  ",x);
        }
    }
    	
	}           */

     
    
	//-----
	
	
	
	//   13) Check whether a number is Strong number or not.
	
	
	
/*	int n,a,f,c,sum=0,i;
    printf("enter num: ");
    scanf("%d",&n);
    a=n;
    while(n>0){
    	f=1;
    	c=n%10;
        for(i=c;i>=1;i--)
        f=f*i;
        sum+=f;
        n=n/10;
    }
    
    if(a==sum)
       printf("it is str");
    else
       printf("it is not str");
    
    
    return 0;
}                   */



    //-----
    
    
    
/*    int n,a,f,c,sum=0,i;
    printf("enter num: ");
    scanf("%d",&n);
    str(n,a,f,c,sum,i);
    
    return 0;
}
   
     int str(int x, int y,int z, int w, int q, int k){
     	 y=x;
    while(x>0){
    	z=1;
    	w=x%10;
        for(k=w;k>=1;k--)
        z=z*k;
        q+=z;
        x=x/10;
    }
    
    if(y==q)
       printf("it is str");
    else
       printf("it is not str");
	 }                         */
	 
	 
	 
	 //-----
   
   

   //   15) Draw a flow chart to check Whether a Number is Palindrome or NotDraw a flow chart to check Whether a Number is Palindrome or Not
   
   
 /*   int b,n,sum=0,num;
    printf("enter the num : ");
    scanf("%d",&n);
    num=n;
    while(n>0){
    	b=n%10;
    	sum=sum*10+b;
    	n/=10;
	}
	if(sum==num)
	  printf("it s pali");
	else
	  printf("it s not pali");  
	  
	  return 0;
}    */
	   
	  
	  
	  //-----
	  
	  
	  
	  //   16) Draw a flow chart to find the sum of the series [ 1+X^2/2!+X^4/4!- .........].
	  
	  
/*	int n,x,p,f=1,sum=1,i;
    printf("enter the x : ");
    scanf("%d",&x);
    printf("enter the n : ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
    	p=pow(x,i);
    	f*=i;
    	sum=sum+(p/f);
	}
	printf("the res : %d",sum);
	
	return 0;
}     */



       //------
       
       
       
       //   17) Draw a flow chart to display the n terms of harmonic series and their sum. (1+ 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms)
       
    
/*	int i,n,sum=1; 
    printf("enter the n : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
    	sum+=1/i;
	}
	printf("the res : %d",sum);
	
	return 0;
} */



    //-----
    
    
    
    //   19)Draw a flow chart to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
    
    
/*    int n,x,p,f=1,sum=1,i;
    printf("enter the x : ");
    scanf("%d",&x);
    printf("enter the n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	p=pow(x,i);
    	f*=i;
    	sum=sum+(p/f);
	}
	printf("the res : %d",sum);      
	
	
	return 0;
	}  */
	
	
	
	
	//------
	
	
	
	//   21) Draw a flow chart to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
	
	
/*	int n,i,c=1,sum=0;
	printf("enter the n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	sum+=c;
    	c=(c*10)+1;
	}
	printf("the res : %d",sum); 
	return 0;
}  */
	
	
	
	//-----
	
	
	
	//   22)Draw a flow chart to find the number and sum of all integer between 100 and 200 which are divisible by 9.
	
	
/*	int i,sum=0;
	for(i=100;i<=200;i++){
		if(i%9==0){
			sum+=i;
		}
	}
	printf("the sum is = %d",sum);
	return 0;
}      */

	
	
	
	


	   



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
