#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
 clrscr();
 char ch,a[9]="computer\0";
 int c=0,i,j,k,status=0,status1=0,bb=0,len=0;
 len=strlen(a);
do{ status=0;
  cout<<" enter a character:";
 cin>>ch;
for(i=0;a[i];i++)
{
   if(a[i]==ch)
  {
    a[i]=toupper(a[i]);
    status=1;
}
  }
  cout<<endl;
  if(status==1)
 {  bb=0;
    for(j=0;a[j];j++)
    {
      if(a[j]>='A'&&a[j]<='Z')
     {
      cout<<a[j]<<"  ";
      bb++;
     }
      else
      cout<<" _ ";
    }
}

if(bb==len)
{
 cout<<" \n \n \t YOU HAVE FOUND THE WORD!!!";
  status1=1;
}
else if (status==0)
{
   c++;
   cout<<" TRY AGAIN!!";

}
}while(c<=6&&status1==0);
if(c>6)
cout<<" COZ THE MAN IS HANGED!!!!!!!!!!!!";
getch();
}