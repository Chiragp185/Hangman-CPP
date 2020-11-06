#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<graphics.h>
#include<iomanip.h>
#include<process.h>
void menu();
void midscreen();
void main_game(char a[50]);
void how_to_play();
void settings();
void credits();
void category();
struct score
{
 int correct,wrong;
}s1;
void category()
{ clrscr();
char a1[20]="elephant\0",sp1[20]="ms dhoni\0";
  int ch;
  cout<<" \t \t \t CATEGORY \n ";
  cout<<"1.SPORTSPERSONS \n 2.ANIMALS \n";
  cout<<" \n \t ENTER YOUR CHOICE:";
  cin>>ch;
  if(ch==1)
  main_game(sp1);
  else
  main_game(a1);
}
void midscreen()
{  int pos=(int)(80-8)/2;
 for(int i=0;i<5;i++)
 cout<<endl;
 for(i=0;i<pos;i++)
 cout<<" ";
}
void credits()
{ midscreen();
  cout<<"HANGMAN";
   for(int i=0;i<7;i++)
  cout<<endl;
   cout<<setw(53)<<"     DONE BY:CHIRAG.K.PARIKH \n";
   for(i=0;i<10;i++)
   cout<<endl;
   cout<<setw(78)<<" PRESS ENTER <--| TO CONTINUE";
 getch();
}
void how_to_play()
{ clrscr();
 int ch;
 cout<<" AS IF YOU DON'T KNOW!!";
 cout<<" \n ENTER 1 TO GO BACK!!";
 cin>>ch;
 if(ch==1)
 menu();
}
void main_game(char a[50])
{ s1.correct=0;s1.wrong=0;
  clrscr();
 char ch;
 int c=0,i,j,k,status=0,status1=0,bb=0,len=0;
 len=strlen(a);
 for(i=0;a[i];i++)
{ if(a[i]==' ')
  len-=1;
}
do{ status=0;
  cout<<"\n ENTER A LETTER:";
 cin>>ch;
 ch=tolower(ch);
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
 {  bb=0;clrscr();
       for(int k=0;k<10;k++)
       cout<<endl;
       cout<<"                             ";
	for(j=0;a[j];j++)
	{
	  if(a[j]>='A'&&a[j]<='Z')
	 {
	  cout<<a[j]<<" ";
	  bb++;
	 }
	  else if(a[j]==' ')
	  cout<<"   ";
	  else
	  cout<<"_ ";
	}
}
cout<<endl<<endl;
if(bb==len)
{
 cout<<" \n \n \t YOU HAVE FOUND THE WORD!!!";
  status1=1;
  s1.correct++;
}
else if (status==0)
{  c++;
   cout<<setw(40)<<" TRY AGAIN!!";

}
}while(c<=6&&status1==0);
if(c>6)
{
 cout<<" COZ THE MAN IS HANGED!!!!!!!!!!!!";
 s1.wrong++;
}
cout<<"\n \n \t THE NO OF CORRECT WORDS ARE:"<<s1.correct<<endl;
cout<<" \t THE NO OF WRONG WORDS ARE:"<<s1.wrong<<endl;
cout<<" \t THE SCORE IS:"<<s1.correct*5;
}
void settings()
{ int ch;
  cout<<" NO SETTINGS FOR NOW!!";
  cout<<" \n ENTER 1 TO GO BACK!!";
  cin>>ch;
  if(ch==1)
  menu();
}
void menu()
{ int ch;
 clrscr();
 cout<<setw(40)<<" MENU \n \n";
   cout<<" 1.START \n 2.HOW TO PLAY \n 3.SETTINGS \n 4.EXIT \n";
  cout<<" \n ENTER YOUR CHOICE:";
  cin>>ch;
  if(ch==1)
  category();
  else if(ch==2)
  how_to_play();
  else if(ch==3)
  settings();
  else if(ch==4)
  exit(0);
}
void main()
{ textcolor(RED);
 clrscr();
 credits();
 menu();
getch();
}