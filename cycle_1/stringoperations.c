 #include<stdio.h>
 #include<string.h>
 int main()
 {
 char str1[100],str2[100];
 int ch=0;
 printf("Enter the first string:");
 scanf("%s",str1);
 printf("Enter the second string:");
 scanf("%s",str2);
 do
 {
 printf("\nSelect a string operation\n 1. Search \t 2. concatinate \t 3. Substring \t 4.Exit\n Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:if(strstr(str1,str2)!=NULL)
        printf("%s found in%s \n",str2,str1);
        else
        printf("%s not found in%s \n",str2,str1);
        break;
case 2:strcat(str1,str2);
       printf("concatinated string %s\n",str1);
       break;
case 3:if(strstr(str1,str2)!=NULL)
       printf("%s found in%s \n",str2,str1);
       break;
case 4:printf("Exiting the program");
       break;
default:printf("Invalid choice");
}
}while(ch!=4);
return 0;
}
 
