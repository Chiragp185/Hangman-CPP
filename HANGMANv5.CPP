#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<iomanip.h>
#include<process.h>
int choice=0,x=1;
void word();
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
void word()
{
  char a[15][20]={"elephant\0","antelope\0","jackal\0","liger\0","alligator\0","white tiger\0","beaver\0","bison\0","rhinoceros\0","blue whale\0","orangutan\0","tibetan mastiff\0","chameleon\0","chimpanzee\0","cougar\0"};
  char sp[15][20]={"ms dhoni\0","sachin tendulkar\0","lionel messi\0","cristiano ronaldo\0","roger federer\0","saina nehwal\0","novak djokovic\0","p v sindhu\0","mary kom\0","milkha singh\0","muhammad ali\0","david beckham\0","wayne rooney/0","usian bolt\0","michael phelps\0"};
  char t[20],tv[15][100]={"game of thrones\0","breaking bad\0","house of cards\0","vikings\0","stranger things\0","the big bang theory\0","the walking dead\0","suits\0","the flash\0","riverdale\0","narcos\0","13 reasons why\0","sherlock\0"};
  randomize();
  int m=random(15);
  if (choice==1)
  strcpy(t,sp[m]);
  else if(choice==2)
  strcpy(t,a[m]);
  else if(choice==3)
  strcpy(t,tv[m]);
  main_game(t);
}
void category()
{
  textcolor(GREEN);
  clrscr();
  cout<<" \t \t \t CATEGORY \n ";
  cout<<"1.SPORTSPERSONS \n 2.ANIMALS \n 3.TV-SERIES\n";
  cout<<" \n \t ENTER YOUR CHOICE:";
  cin>>choice;
  word();
}
void midscreen()
{
 int pos=(int)(80-8)/2;
 for(int i=0;i<5;i++)
 cout<<endl;
 for(i=0;i<pos;i++)
 cout<<" ";
}
void credits()
{
  midscreen();
  s1.correct=0;s1.wrong=0;
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
{
 textcolor(WHITE);
 clrscr();
 int ch;
 cout<<" \n \n COMMON YOU KNOW HOW TO PLAY THIS GAME!!! :) \n \n SERIOUSLY YOU DONT???? \n \n OKAY!! JUST FOLOW THE INSTRUCTIONS WHILE PLAYING AND KNOW THIS:- \n YOU GET 5 POINTS FOR EACH CORRECT WORD \n THE GAME STOPS IF YOU GUESS A WORD WRONG!!";
 cout<<" \n \n \n \n \n \t PRESS ANY KEY TO GO BACK!!";
 getch();
 menu();
}
void main_game(char a[50])
{
 textcolor(YELLOW);
  clrscr();
 char ch;
 int c=0,i,j,k,status=0,status1=0,bb=0,len=0;
 for(i=0;a[i];i++)
{ if(a[i]!=' ')
  len++;
}
for(k=0;k<10;k++)
cout<<endl;
cout<<"                             ";
for(i=0;a[i];i++)
{
  if(a[i]!=' ')
  cout<<"_ ";
  else
  cout<<"   ";
}
do{ status=0;
cout<<" \n \n \n   \t \t \tCHANCES REMAINING:"<<7-c;
cout<<"\n \n \n ENTER A LETTER:";
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
  bb=0;
  textcolor(x++);
    clrscr();
       for(k=0;k<10;k++)
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
cout<<endl<<endl;
if(bb==len)
{
  char ch1;
  cout<<" \n \n \t YOU HAVE FOUND THE WORD!!!";
  s1.correct++;
  cout<<" \n \t DO YOU WANT TO PLAY AGAIN?(Y/N)";
  cin>>ch1;
  ch1=toupper(ch1);
  if(ch1=='Y')
  word();
  else
  status1=1;
}
else if (status==0)
{
  c++;
  cout<<setw(40)<<" TRY AGAIN!!";

}
}while(c<=6&&status1==0);
textcolor(RED);
if(c>6)
{ clrscr();
for(k=0;k<10;k++)
 cout<<endl;
 cout<<"                  !!!!!!!!!!!!THE MAN IS HANGED!!!!!!!!!!!!";
 s1.wrong++;
 cout<<"\n                          PRESS ENTER<--| FOR SCORES";
 getch();
}
textcolor(BLUE);
clrscr();
cout<<" \n \t \t \t!!!!!!!!!!!!SCORES!!!!!!!!!!!!";
if(s1.wrong>0)
{ cout<<" \n \n \t THE ANSWER WAS:";
for(k=0;a[k];k++)
a[k]=toupper(a[k]);
cout<<a;
}
for(k=0;k<10;k++)
cout<<endl;
cout<<"\n \n \t                THE NO OF CORRECT WORDS ARE:"<<s1.correct<<endl;
cout<<" \t                 THE NO OF WRONG WORDS ARE:"<<s1.wrong<<endl;
cout<<" \t                     THE SCORE IS:"<<s1.correct*5;
getch();
exit(0);
}
void settings()
{ int ch;
  textcolor(5);
  clrscr();
  cout<<" \n \n SETTINGS??? FOR THIS GAME??? \n \n OKAY!! SINCE YOUR ARE SO DESPERATE I'LL GIVE YOU A HINT: \n CATEGORY 1 IS EASY, 2 IS HARD AND 3 IS MEDIUM!!! \n \n \n ALL THE BEST!";
  cout<<" \n \n \n PRESS ANY KEY TO GO BACK!!";
  getch();
  menu();
}
void menu()
{ int ch;
 textcolor(BLUE);
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
{
textcolor(RED);
 clrscr();
 credits();
 menu();
getch();
}
