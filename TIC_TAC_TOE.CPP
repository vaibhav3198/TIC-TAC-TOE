//TIC TAC
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int check(int A[10]);
void update(int A[10],int t,int x);
void playcomputer();
void display();
int checkend(int A[10]);
int p1[10],p2[10],pc[10],game[10];
char a1,a2,a3,a4,a5,a6,a7,a8,a9,ch1,ch2;

void main()
{
  clrscr();
  void tictac();
  int i,choice;
  char c=' ';
    //ch1='#';
    //ch2='&';
  cout<<"\n 1. Two Players "
      <<"\n 2. Play Against Computer "
      <<"\n 3. Exit \n";
  cin>>choice;
  clrscr();

  cout<<"\n Player 1 Symbol: ";
  cin>>ch1;
  cout<<"\n Player 2 Symbol: ";
  cin>>ch2;
    a1='1';
    a2='2';
    a3='3';
    a4='4';
    a5='5';
    a6='6';
    a7='7';
    a8='8';
    a9='9';
  for(i=0;i<10;i++)
  {
    game[i]=0;
  }
  do
  {
    switch(choice)
    {
      case 1:tictac();
	     break;
      case 2:playcomputer();
	     break;
      case 3:cout<<"\n Thank you ";
	     getch();
	     exit(0);
      default: cout<<"\n You entered wrong choice ";
	       getch();
	       exit(0);
    }

    getch();
    clrscr();
    cout<<"\n Do you want to play again ";
    cin>>c;
    if(c=='n'||c=='N')
    {
      clrscr();
      cout<<"\n ThankYou for playing ";
      getch();
    }
  }while(c=='y'||c=='Y');
  getch();
}


  int check(int A[10])
  {
    if(A[1]==1&&A[2]==1&&A[3]==1)
    {
      return(1);
    }
    else if(A[1]==1&&A[4]==1&&A[7]==1)
    {
      return(1);
    }
    else if(A[1]==1&&A[5]==1&&A[9]==1)
    {
      return(1);
    }
    else if(A[3]==1&&A[5]==1&&A[7]==1)
    {
      return(1);
    }
    else if(A[3]==1&&A[6]==1&&A[9]==1)
    {
      return(1);
    }
    else if(A[5]==1&&A[4]==1&&A[6]==1)
    {
      return(1);
    }
    else if(A[7]==1&&A[8]==1&&A[9]==1)
    {
      return(1);
    }
    else if(A[2]==1&&A[5]==1&&A[8]==1)
    {
      return(1);
    }
    else
    {
      return(0);
    }
  }

  int checkend(int A[10])
  {
     int i;
     for(i=1;i<10;i++)
     {
       if(A[i]==0)
       {
	 return(0);
       }
     }
     return(1);
  }
  void display()
  {
    printf("      |       |      ");
    printf("\n    %c |   %c   |   %c ",a1,a2,a3);
    printf("\n      |       |      ");
    printf("\n_____________________");
    printf("\n      |       |      ");
    printf("\n    %c |   %c   |   %c ",a4,a5,a6);
    printf("\n      |       |      ");
    printf("\n_____________________");
    printf("\n      |       |      ");
    printf("\n    %c |   %c   |   %c  ",a7,a8,a9);
    printf("\n      |       |      ") ;
  }

  void update(int A[10],int t,int x)
  {
    if(p1[t]!=1&&p2[t]!=1)
    {
      A[t]=1;
      game[t]=1;
      switch(t)
      {
	case 1: if(x==1)
		{
		  a1=ch1;
		}
		else if(x==2)
		{
		  a1=ch2;
		}
		break;
	case 2: if(x==1)
		{
		  a2=ch1;
		}
		else if(x==2)
		{
		  a2=ch2;
		}
		break;
	case 3: if(x==1)
		{
		  a3=ch1;
		}
		else if(x==2)
		{
		  a3=ch2;
		}
		break;
	case 4: if(x==1)
		{
		  a4=ch1;
		}
		else if(x==2)
		{
		  a4=ch2;
		}
		break;
	case 5: if(x==1)
		{
		  a5=ch1;
		}
		else if(x==2)
		{
		  a5=ch2;
		}
		break;
	case 6: if(x==1)
		{
		  a6=ch1;
		}
		else if(x==2)
		{
		  a6=ch2;
		}
		break;
	case 7: if(x==1)
		{
		  a7=ch1;
		}
		else if(x==2)
		{
		  a7=ch2;
		}
		break;
	case 8: if(x==1)
		{
		  a8=ch1;
		}
		else if(x==2)
		{
		  a8=ch2;
		}
		break;
	case 9: if(x==1)
		{
		  a9=ch1;
		}
		else if(x==2)
		{
		  a9=ch2;
		}
		break;
	default:cout<<"\n Wrong Choice ";
      }
   }
  }

  void tictac()
  {
    int i,t1,t2;
    for(i=0;i<10;i++)
    {
      game[i]=0;
      p1[i]=0;
      p2[i]=0;
    }
    while(check(p1)==0||check(p2)==0)
    {
       clrscr();
       display();
       cout<<"\n Player 1: ";
       cin>>t1;
       update(p1,t1,1);
       clrscr();
       display();
       if(check(p1)==1)
       {
	 cout<<"\n Player 1 wins ";
	 getch();
	 exit(0);
       }
       else if(checkend(game)==1)
       {
	 cout<<"\n Draw ";
	 getch();
	 exit(0);
       }
       clrscr();
       display();
       cout<<"\n Player 2: ";
       cin>>t2;
       update(p2,t2,2);
       clrscr();
       display();
       if(check(p2)==1)
       {
	 cout<<"\n Player 2 wins ";
	 getch();
	 exit(0);
       }
    }
  }

  void playcomputer()
  {
    randomize();
    int i,t1,t2,flag=1;
    for(i=0;i<10;i++)
    {
      game[i]=0;
      p1[i]=0;
      pc[i]=0;
    }
    while(check(p1)==0||check(pc)==0) //while none players have won
    {
       clrscr();
       display();
       cout<<"\n Player 1: ";
       cin>>t1;
       update(p1,t1,1);
       clrscr();
       display();
       if(check(p1)==1)              //if player 1 wins
       {
	 cout<<"\n Player 1 wins ";
	 getch();
	 exit(0);
       }
       else if(checkend(game)==1)
       {
	 cout<<"\n Draw ";
	 getch();
	 exit(0);
       }
       clrscr();
       display();
       while(1)
       {
	 t2=random(9)+1;
	 if(pc[t2-1]==1||p1[t2-1]==1)      //if randomly generated t2 is already entered by p1 or comp
	 {
	   continue;
	 }
	 else
	 {
	   update(pc,t2,2);
	   break;
	 }
       }

       clrscr();
       display();
       if(check(pc)==1)
       {
	 cout<<"\n Computer wins ";
	 getch();
	 exit(0);
       }
    }
  }
