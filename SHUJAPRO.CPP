#include<iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void print(int a,int b){
line(200,100,200,400);
line(400,100,400,400);
line(70,200,530,200);
line(70,310,530,310);
outtextxy(130,150,"1");
outtextxy(300,150,"2");
outtextxy(480,150,"3");
outtextxy(130,250,"4");
outtextxy(300,250,"5");

outtextxy(480,250,"6");
outtextxy(130,350,"7");
outtextxy(300,350,"8");
outtextxy(480,350,"9");

switch(a){

   case 1:
   setfillstyle(SOLID_FILL,RED);
   circle(130,150,40);
   floodfill(131,150,WHITE);
   break;
   case 2:
   setfillstyle(SOLID_FILL,RED);
   circle(305,150,40);
   floodfill(306,150,WHITE);
   break;
   case 3:
   setfillstyle(SOLID_FILL,RED);
   circle(478,150,40);
   floodfill(479,150,WHITE);
   break;
   case 4:
   setfillstyle(SOLID_FILL,RED);
   circle(130,255,40);
   floodfill(131,255,WHITE);
   break;
   case 5:
   setfillstyle(SOLID_FILL,RED);
   circle(305,255,40);
   floodfill(306,255,WHITE);
   break;
   case 6:
   setfillstyle(SOLID_FILL,RED);
   circle(470,255,40);
   floodfill(471,255,WHITE);
   break;
   case 7:
   setfillstyle(SOLID_FILL,RED);
   circle(130,360,40);
   floodfill(131,360,WHITE);
   break;
   case 8:
   setfillstyle(SOLID_FILL,RED);
   circle(305,360,40);
   floodfill(306,360,WHITE);
   break;
   case 9:
   setfillstyle(SOLID_FILL,RED);
   circle(480,360,40);
   floodfill(481,360,WHITE);
   break;

}


switch(b){

   case 1:
   setfillstyle(SOLID_FILL,GREEN);
   circle(130,150,40);
   floodfill(131,150,WHITE);
   break;
   case 2:
   setfillstyle(SOLID_FILL,GREEN);
   circle(305,150,40);
   floodfill(306,150,WHITE);
   break;
   case 3:
   setfillstyle(SOLID_FILL,GREEN);
   circle(478,150,40);
   floodfill(479,150,WHITE);
   break;
   case 4:
   setfillstyle(SOLID_FILL,GREEN);
   circle(130,255,40);
   floodfill(131,255,WHITE);
   break;
   case 5:
   setfillstyle(SOLID_FILL,GREEN);
   circle(305,255,40);
   floodfill(306,255,WHITE);
   break;
   case 6:
   setfillstyle(SOLID_FILL,GREEN);
   circle(470,255,40);
   floodfill(471,255,WHITE);
   break;
   case 7:
   setfillstyle(SOLID_FILL,GREEN);
   circle(130,360,40);
   floodfill(131,360,WHITE);
   break;
   case 8:
   setfillstyle(SOLID_FILL,GREEN);
   circle(305,360,40);
   floodfill(306,360,WHITE);
   break;
   case 9:
   setfillstyle(SOLID_FILL,GREEN);
   circle(480,360,40);
   floodfill(481,360,WHITE);
   break;

}
}
void turn(){
      int p1,p2;
      int p=0;
      int p2box1=0,p2box2=0,p2box3=0,p2box4=0,p2box5=0,p2box6=0,p2box7=0,p2box8=0,p2box9=0;
      int p1box1=0,p1box2=0,p1box3=0,p1box4=0,p1box5=0,p1box6=0,p1box7=0,p1box8=0,p1box9=0;
      int i=1;
      while(i<=9)
      {
       if(i==1||i==3||i==5||i==7||i==9){
      cout<<"P1 Please enter ";
      cin>>p1;
      if(p1==1&&p1box1!=1&&p2box2!=1){
      print(p1,p);
      p1box1=1;        }
      else if(p1==2&&p1box2!=2&&p2box2!=2){
      print(p1,p);
      p1box2=2;       }
      else if(p1==3&&p1box3!=3&&p2box3!=3){
      print(p1,p);
      p1box3=3;      }
      else if(p1==4&&p1box4!=4&&p2box4!=4){
      print(p1,p);
      p1box4=4;     }
      else if(p1==5&&p1box5!=5&&p2box5!=5){
      print(p1,p);
      p1box5=5;    }
      else if(p1==6&&p1box6!=6&&p2box6!=6){
      print(p1,p);
      p1box6=6;   }
      else if(p1==7&&p1box7!=7&&p2box7!=7){
      print(p1,p);
      p1box7=7;  }
      else if(p1==8&&p1box8!=8&&p2box8!=8){
      print(p1,p);
      p1box8=8; }
      else if(p1==9&&p1box9!=9&&p2box9!=9){
      print(p1,p);
      p1box9=9;}
      else{cout<<"Wrong input please enter again ";
      i--;}


      }
      else if(i==2||i==4||i==6||i==8)
      {cout<<"P2 Please enter ";
      cin>>p2;
       if(p2==1&&p1box1!=1&&p2box2!=1){
      print(p,p2);
      p2box1=1;    }
      else if(p2==2&&p1box2!=2&&p2box2!=2){
      print(p,p2);
      p2box2=2;      }
      else if(p2==3&&p1box3!=3&&p2box3!=3){
      print(p,p2);
      p2box3=3;     }
      else if(p2==4&&p1box4!=4&&p2box4!=4){
      print(p,p2);
      p2box4=4;    }
      else if(p2==5&&p1box5!=5&&p2box5!=5){
      print(p,p2);
      p2box5=5;   }
      else if(p2==6&&p1box6!=6&&p2box6!=6){
      print(p,p2);
      p2box6=6;  }
      else if(p2==7&&p1box7!=7&&p2box7!=7){
      print(p,p2);
      p2box7=7; }
      else if(p2==8&&p1box8!=8&&p2box8!=8){
      print(p,p2);
      p2box8=8;}
      else if(p2==9&&p1box9!=9&&p2box9!=9){
      print(p,p2);
      p2box9=9;}
      else{cout<<"Wrong input please enter again ";
      i--;
      }
      }
      if(p1box1==1&&p1box2==2&&p1box3==3||p1box4==4&&p1box5==5&&p1box6==6||p1box7==7&&p1box8==8&&p1box9==9||p1box1==1&&p1box4==4&&p1box7==7||p1box2==2&&p1box5==5&&p1box8==8||p1box3==3&&p1box6==6&&p1box9==9||p1box1==1&&p1box5==5&&p1box9==9||p1box3==3&&p1box5==5&&p1box7==7)
      {
      cout<<"P1 won ";
      i=10;
      }
       if(p2box1==1&&p2box2==2&&p2box3==3||p2box4==4&&p2box5==5&&p2box6==6||p2box7==7&&p2box8==8&&p2box9==9||p2box1==1&&p2box4==4&&p2box7==7||p2box2==2&&p2box5==5&&p2box8==8||p2box3==3&&p2box6==6&&p2box9==9||p2box1==1&&p2box5==5&&p2box9==9||p2box3==3&&p2box5==5&&p2box7==7)
      {
      cout<<"P2 won ";
      i=10;
      }
      i++;
      if(i==10){cout<<"Game Draw ";}
      }
}
void board(){
line(200,100,200,400);
line(400,100,400,400);
line(70,200,530,200);
line(70,310,530,310);
outtextxy(130,150,"1");
outtextxy(300,150,"2");
outtextxy(480,150,"3");
outtextxy(130,250,"4");
outtextxy(300,250,"5");
outtextxy(480,250,"6");
outtextxy(130,350,"7");
outtextxy(300,350,"8");
outtextxy(480,350,"9");

 }
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
    }
      board();
      cout<<"P1 is RED , P2 is GREEN\n";
      turn();
   getch();
   closegraph();
   return 0;
}
