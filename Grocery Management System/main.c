#include<stdio.h>
#include<string.h>
struct store
{
    char name[50];
    float price;
    float measure;
    int quality;
    int shell;
    char exp[10];
    char mfd[10];
}x[500];
int i,j=0,num,sum=0,flag,a=0,n,c=1;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();
int main()
{
    read();
    printf("Vhai vhai Store\n\n");
    while(c!=0)
    {
        printf("Enter choice:\n\n1.Add item\n2.View item\n3.Search item\n.4.Edit item\n5.Delete item\n6.Exit\n\nChoice:");
        scanf("%d",&c);//choice variable
        fflush(stdin);
        if(c==1)
        {

            add();
        }
        else if(c==2)
        {
            system("cls");
            view();
        }
        else if(c==3)
        {
            system("cls");
            search();
        }
        else if(c==4)
        {
            system("cls");
            edit();
        }
        else if(c==5)
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            system("cls");
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("Invalid !\nPlease give a valid Input");
        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("There is already %d item\n\n.",num);
    printf("How many items do you want to add here?\n");
    scanf("%d",&n);
    sum=n+num;
    for(i=num,j=0;i<sum;i++)
    {
        printf("\n\n");
        fflush(stdin);
        printf("Enter the item Name:");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter price:");
        scanf("%f",&x[i].price);
        fflush(stdin);
        printf("Enter measure:");
        scanf("%f",&x[i].measure);
        fflush(stdin);
        printf("Enter shell Number:");
        scanf("%d",x[i].shell);
        fflush(stdin);
        printf("Enter the Manufacture date:");
        gets(x[i].mfd);
        fflush(stdin);
        printf("Enter the expire date:");
        gets(x[i].exp);
        printf("\n\n");
        j++;
        a++;
        num++;
    }
}
void view()
{
  for(i=0;i<num;i++)
  {
      printf("\n");
      printf("Serial no:%d",i);
      printf("Name:");
      puts(x[i].name);
      printf("price:%f",x[i].price);
      printf("Measure:%f",x[i].measure);
      printf("Quality:%d",x[i].quality);
      printf("ShellNo:%d",x[i].shell);
      printf("Mfd:");
      puts(x[i].mfd);
      printf("Exp:");
      puts(x[i].exp);
      printf("\n\n******");
  }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit?\n");
    printf("Enter choice:\n");
    printf("1.Name\n2.Price\n3.Measure\n4.Quality\n5.Shell No\n6.Manufacture Date\n7.Exp Date");
    printf("Option:");
    scanf("%d",&q);//option variable
    if(q<=7)
    {
        printf("Enter the serial No of the Item from (0-%d):",num-1);
        scanf("%d",&p);//serial Number
        if(p<num){
        if(q==1)
        {
            fflush(stdin);
            printf("Enter New Name:");
            gets(x[p].name);
        }
        else if(q==2)
        {
            fflush(stdin);
            printf("Enter New Price:");
            scanf("%f",&x[p].price);
        }
        else if(q==3)
        {
            fflush(stdin);
            printf("Enter New Measure:");
            scanf("%f",&x[p].measure);
        }
        else if(q==4)
        {
            fflush(stdin);
            printf("Enter New Quality:");
            scanf("%d",&x[p].quality);
        }
        else if(q==5)
        {
            fflush(stdin);
            printf("Enter new shell No:");
            scanf("%d",&x[p].shell);
        }
        else if(q==6)
        {
            fflush(stdin);
            printf("Enter New Manufacture Date:");
            gets(x[p].mfd);
        }
        else if(q==7)
        {
            fflush(stdin);
            printf("Enter New expire date:");
            gets(x[p].exp);
        }
    }
    else

        printf("Invalid !\nPlease give correct input.");

 }
 else
    printf("Invalid !\nPlease input correctly");

}
void search()
{
   int s,h,f;
   char u[100];
   printf("You can search by:\n");
   printf("1.Name\2.Price\n3.Measure\n4.Quality\n5.ShellNo\n");
   printf("Enter search option:");
   scanf("%d",&h);
   if(h==1)
   {
       printf("Enter the Item No:");
       scanf("%d",&s);
       if(s<num)
       {
           printf("\n");
           printf("serial Number:%d\n",s);
           printf("Name:");
           puts(x[s].name);
           printf("Price:%f",x[s].price);
           printf("Measure:%f",x[s].measure);
           printf("Quality:%d\nShellNo:%d",x[s].quality,x[s].shell);
           printf("Mfd:");
           puts(x[s].mfd);
           printf("Exp:");
           puts(x[s].exp);
           printf("\n\n");

       }
       else
        printf("Not found..");
   }
   else if(h==2)
   {
       int f=1,g;
       fflush(stdin);
       printf("Enter the Name:");
       gets(u);
       fflush(stdin);
       for(g=0;g<num;g++)
       {
           if(strcmp(u,x[g].name)==0)
           {
               printf("\n");
               printf("serial No:%d\n",g);
               printf("Name:");
               puts(x[g].name);
               printf("Price:%f",x[g].price);
               printf("Measure:%f",x[g].measure);
               printf("Quality:%d\nShellNo:%d",x[g].quality,x[g].shell);
               printf("Mfd:");
               puts(x[g].mfd);
               printf("Exp:");
               puts(x[g].exp);
               printf("\n\n");
               f=0;
           }
       }
       if(f=1)
        printf("\nNot found !");

   }
   else if(h==3)
   {
       int g;
       float f=1;
       printf("Enter Price:");
       scanf("%f",&f);
       for(g=0;g<num;g++)
       {
           if(f==x[g].measure)
           {
               printf("\n");
               printf("Serial No:%d\n",g);
                printf("Name:");
           puts(x[g].name);
           printf("Price:%f",x[g].price);
           printf("Measure:%f",x[g].measure);
           printf("Quality:%d\nShellNo:%d",x[g].quality,x[g].shell);
           printf("Mfd:");
           puts(x[g].mfd);
           printf("Exp:");
           puts(x[g].exp);
           printf("\n\n");
           f=0;
           }
       }
       if(f==1)
        printf("Not found\n\n");
   }
   else if(h==4)
   {
       int f=1,g;
       printf("Enter Quality:");
       scanf("%d",&f);
       for(g=0;g<num;g++)
       {
           if(f==x[g].quality)
           {
                printf("\n");
               printf("serial No:%d\n",g);
               printf("Name:");
               puts(x[g].name);
               printf("Price:%f",x[g].price);
               printf("Measure:%f",x[g].measure);
               printf("Quality:%d\nShellNo:%d",x[g].quality,x[g].shell);
               printf("Mfd:");
               puts(x[g].mfd);
               printf("Exp:");
               puts(x[g].exp);
               printf("\n\n");
               f=0;
           }
       }
       if(f==1)
        printf("Not found!");
   }
   else if(h==5)
   {
       int f=0,g;
       printf("Enter shellNo:");
       scanf("%d",&f);
       for(g=0;g<num;g++)
       {
           if(f==x[g].shell)
           {
                printf("\n");
               printf("serial No:%d\n",g);
               printf("Name:");
               puts(x[g].name);
               printf("Price:%f",x[g].price);
               printf("Measure:%f",x[g].measure);
               printf("Quality:%d\nShellNo:%d",x[g].quality,x[g].shell);
               printf("Mfd:");
               puts(x[g].mfd);
               printf("Exp:");
               puts(x[g].exp);
               printf("\n\n");
               f=0;
           }
       }
       if(f==1)
        printf("Not found!");
   }

}
void del()
{
   int f,h;
   printf("Enter the Item serial:");
   scanf("%d",&f);
   if(f<num)
   {
       printf("what do you want to do?\n");
       printf("1.Remove the whole record\n2.Remove name\n3.remove Price\n4.Remove measure\n5.Remove Quality\n6.Remove shellNo\n7.Remove Manufacture Date\n8.Remove expire date\n\nOption:");
       scanf("%d",&h);
       if(h==1)
       {
           while(f<num)
           {
               strcpy(x[f].name,x[f+1].name);
               x[f].price,x[f+1].price;
               x[f].measure,x[f+1].measure;
               x[f].quality,x[f+1].quality;
               x[f].shell,x[f+1].shell;
               strcpy(x[f].mfd,x[f+1].mfd);
               strcpy(x[f].exp,x[f+1].exp);
               f++;
           }
           num--;
       }
       else if(h==2)
       {
           strcpy(x[f].name,"cleared");
       }
       else if(h==3)
       {
           x[f].price=0;
       }
       else if(h==4)
       {
           x[f].measure=0;
       }
       else if(h==5)
       {
           x[f].quality=0;
       }
       else if(h==6)
       {
           x[f].shell=0;
       }
       else if(h==7)
       {
           strcpy(x[f].mfd,"cleared");
       }
       else if(h==8)
       {
           strcpy(x[f].exp,"cleared");
       }
       else
        printf("Invalid Input!");

}
void read()
{
    FILE *fp=fopen("store.txt","r");
    if(fp==NULL)
    {
        fp=fopen("store.txt","w");
        fclose(fp);
        printf("File doesn't exists!");
        exit(1);
    }
    num=fread(x,sizeof(struct store),500,fp);
    fclose(fp);

}
void write()
{
    FILE *fp=fopen("store.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    fwrite(x,sizeof(struct store),num,fp);
    fclose(fp);
}













}

