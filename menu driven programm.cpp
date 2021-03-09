#include<stdio.h>
#include<conio.h>

int main()
{
	int choice, i,j;
	char c='y';
	while(c=='y')
	{
		printf("\nreversed simple star pyramid-->1 \n simple star pyramid-->2 \nreversed number pyramid -->3 \nsimple number pyramid -->4 \nsimple pyramid with alp-->5 \nreversed  pyramid with space star-->6 \nsimple pyramid with space star -->7 \n");
		
		printf("\n Enter your choice of operation: \n");
		scanf("%d",&choice);
	
		
		 switch(choice)
		 {
		 	case 1: printf("\n reversed simple  satr pyiramid :\n");
		 		for(i=10; i>=0; i--)
		  {
				 	
	
	     	for(j=0; j<=i; j++)
		      {
			printf("*");
		   	
		   
		      }
		      printf("\n");
		
	       }
		 break;
	     
		 
		 
		    case 2: printf("\n simple star pyramid : \n");
		    
	        for(i=0; i<=15; i++)
	       {
		   
		       for(j=0; j<=i; j++)
		     {
			 
			printf("*");
		   	  }
		     printf("\n");
		   }
		
		
		break;
		
		
		  case 3: printf("\nreversed number pyramid : \n");
		           for(i=10; i>=1; i--)
	         {
		  
		        for(j=1; j<=i; j++)
		     {
			
			     printf("%d",j);
		      }
		   	printf("\n");
		   
	     	 }
		
      	
		break;
		
		
		case 4: printf("\nsimple number pyiramid : \n");
		         	for(i=1; i<=6; i++)
	     {
		 
		    for(j=1; j<=i; j++)
		  {
			printf("%d",j);
		   	
		   
		  }
		printf("\n");
        	}
		break;
		
		
		 case 5: printf("\nsimple pyramid with alp:\n");
		         
	      for(i=0; i<=10; i++)
	
		  {
		     for(j=1; j<=i; j++)
		   {
			printf("%c",i+64);
		   	
	        }
	        printf("\n");
		  }
		
     	
		break;
		
		
		case 6: printf("\nreversed pyramid with space star: \n");
		
		        	for(i=6; i>=0; i--)
	 {
		for(j=0; j<=6-i; j++)
	    
		  	printf(" ");
		
		for(j=0; j<=i; j++)
		 {
			printf(" * ");
			
		}
		printf("\n");
		
	 }
	 break;
	 
	   case 7: printf:("\nsimple pyramid with sapce star: \n");
	   
	         for(i=0; i<=5; i++)
	  {
		for(j=0; j<=5-i ; j++)
		printf(" ");
		
		for(j=0; j<=i; j++)
		{
			printf(" * ");
			
		}
		printf("\n");
     	}
     	break;
		
		default : printf("\n wrong choice");
		
	
	  }
	printf("\n Do you want to continue: Y/ N");
     c= getch();
  }
  getch();
 
}
      
  
  



	

	
