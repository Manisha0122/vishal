#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
#include&lt;stdlib.h&gt;
struct book
{
     int bno,bcost,baccno;
     char bname&#91;20],bpub&#91;20],bauthor&#91;20];
}p&#91;10];
int main()
{
     int n,i,ch;
     char pubname&#91;20],authorname&#91;20];
     printf("/*How Many Records of Books You Want to Add*/\n\nEnter Limit : ");
     scanf("%d",&amp;n);
     printf("------------------------------------------\n");
     for(i=0;i&lt;n;i++)
     {
          printf("\tEnter Details of Book-%d",i+1);
          printf("\n------------------------------------------\n");
          printf("Book Number      : ");
          scanf("%d",&amp;p&#91;i].bno);
          printf("Book Name        : ");
          scanf("%s",p&#91;i].bname);
          printf("Author Name     : ");
          scanf("%s",p&#91;i].bauthor);
          printf("Publication : ");
          scanf("%s",p&#91;i].bpub);
          printf("Cost             : ");
          scanf("%d",&amp;p&#91;i].bcost);
          printf("Accession Number : ");
          scanf("%d",&amp;p&#91;i].baccno);
          printf("------------------------------------------\n");
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("------------------------------------------\n");
          printf("\n1.Books of Specific Author");
          printf("\n2.Books of Specific Publisher");
          printf("\n3.All Books Costing Rs. 500 &amp; Above");
          printf("\n4.All Books");
          printf("\n5.Exit");
          printf("\n------------------------------------------\n");
          printf("\nEnter Your Choice : ");
          scanf("%d",&amp;ch);
          printf("\n");
          switch(ch)
          {
               case 1:
                    printf("Enter Author Name : ");
                    scanf("%s",authorname);
                    for(i=0;i&lt;n;i++)
                    {
                         if(strcmp(p&#91;i].bauthor,authorname)==0)
                         printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n",p&#91;i].bno,p&#91;i].bname,p&#91;i].baccno);
                    }
                    break;
               case 2:
                    printf("Enter Publication Name : ");
                    scanf("%s",pubname);
                    for(i=0;i&lt;n;i++)
                    {
                         if(strcmp(p&#91;i].bpub,pubname)==0)
                              printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n\n",p&#91;i].bno,p&#91;i].bname,p&#91;i].baccno);
                    }
                    break;
               case 3:
                    for(i=0;i&lt;n;i++)
                    {
                         if(p&#91;i].bcost&gt;=500)
                         {
                              printf("Book Number : %d\n",p&#91;i].bno);
                              printf("Book Name : %s \n",p&#91;i].bname);
                              printf("Cost : %d\n",p&#91;i].bcost);
                              printf("Accession Number : %d\n",p&#91;i].baccno);
                              printf("\n------------------------------------------\n");
                         }
                    }
                    break;
               case 4:
                    for(i=0;i&lt;n;i++)
                    {
                         printf("Book Number   : %d\n",p&#91;i].bno);
                         printf("Book Name : %s \n",p&#91;i].bname);
                         printf("Author : %s\n",p&#91;i].bauthor);
                         printf("Publisher : %s\n",p&#91;i].bpub);
                         printf("Cost : %d\n",p&#91;i].bcost);
                         printf("Accession Number : %d\n",p&#91;i].baccno);
                         printf("\n------------------------------------------\n");
                    }
                    break;
               case 5:
                    exit(0);
          }
     }
     return 0;
}