/*  APACHE LICENSE 2.0 on GitHub

    income.c ;        income.exe .

    "INCOME_CALCULATOR" :->
    An open source program to calculate your income.
    NOTE:-  By default, datas are set for Indian central govt. officers as of now!

    Copyright (c) 2019 by Vishisht-Ranjan-Saxena
    All Rights Reserved.
*/

//Authors :  Vishisht Ranjan Saxena

//This program calculates your income as per the given data.
//All datas are publicly available; No CONFIDENTIAL Leak!


#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "process.h"
#include "time.h"

//#define  CS(X,Y) (strcmp(X,"Y")==0)
#define  INTRO  "   Developed By: VISHISHT RANJAN SAXENA            {Open_Source-2019}          "
#define VERSION  puts("   Press any Key to EXIT..!                         @ <INCOME_CALCULATOR-1.55>")

void err(long int *n){
  VERSION;
  puts("   @ <INCOME_CALCULATOR-1.55>  ");
  printf(INTRO);
  *n = *n + 1;
  getch();   exit(0);   }

long int approx(long float a)
{  long int i, j, k;
   k=a;  a=a*100000;  i=a;
   j = i - (k*100000);
   if(j<44445)   return k;
   k++;   return k;    }

/*
long int about(long float a, int *x)
{  long int i, j, k;
   k=a;  a=a*100000; i=a;
   j = i - (k*100000);
   if(j<44445)   return k;
   *x = *x + 5;   return k;   }
*/

void main()
{
  long float cghs, insurance, pension, deduction, totalincome;
  long float da, hrapercent, hra, ta, daonta, trans, gross;
  long float basic, dapercent, level, spay, opay;
  long float ptax, itax, het, gpf, recovery, b, v;
  char clas, hrag, nps, ghsg, dum;
  char name[25], design[14], lev[11], line[1000], lt[100];
  FILE *fp, *ft, *fr;    long int n=0, a, c;
  struct tm* t;
  struct tm* tt;// tt, ttt;
  time_t tp, tr;// lt, ltt;
  time(&tr);
  tt = localtime(&tr);
  strftime(lt,100,"   Start Time is %I : %M : %S %p. ",tt);
  //printf("Welcome! Press any Key to CONTINUE: ");
  //getch();
 //while(1){
  textcolor(BLUE);
  textbackground(WHITE);
  clrscr();
  /* lt = time(NULL);
  tt = localtime(<);
  printf("%s",asctime(tt)); */
  time(&tp);       // tr = tp;
  t = localtime(&tp);
  strftime(line,1000,"%Z:->  %I: %M %p.; %d %B, %Y; (%A).",t);
  printf(" %s \n",line);
  printf("\n \n  Name of the Employee/Officer:- ");   gets(name);
  //scanf("%c %s",&dum,&name);
  printf("  His/Her Designation:-  ");   gets(design);
  //scanf("%c %s",&dum,&design);
  /*  textcolor(BLUE);
      textbackground(WHITE);   */
  clrscr();
  /* ltt = time(NULL);
  ttt = localtime(<);
  printf("%s",asctime(ttt));  */
  time(&tp);
  t = localtime(&tp);
  strftime(line,1000,"%Z:->  %I: %M %p.; %d %B, %Y; (%A).",t);
  printf(" %s \n",line);
  printf("\n   Name & Designation:- %s, %s.\n \n",name,design);
  printf("   Is HRA permissible or not?  Y/N    ");
  scanf("%c",&hrag);
  if((hrag!='y')&&(hrag!='n')&&(hrag!='Y')&&(hrag!='N'))
  {  puts("   Invalid Input for HRA..!");   err(&n);  }  //continue;  }
  printf("   Is CGHS beneficiary or not?  Y/N    ");
  scanf("%c %c",&dum,&ghsg);
  if((ghsg!='y')&&(ghsg!='n')&&(ghsg!='Y')&&(ghsg!='N'))
  {  puts("   Invalid Input for CGHS..!");   err(&n);  }  //continue;  }
  printf("   Is NPS employable or not?  Y/N    ");
  scanf("%c %c",&dum,&nps);
  if((nps!='y')&&(nps!='n')&&(nps!='Y')&&(nps!='N'))
  {  puts("   Invalid Input for NPS..!");   err(&n);  }  //continue;  }
  if((nps=='y')||(nps=='Y'))
  {    fp = fopen("nps.c","a");
       ft = fopen("npsr.c","a");
  }
  else
  {   fp = fopen("gpf.c","a");
      ft = fopen("gpfs.c","a");
  }
  fr = fopen("sal.c","a");

  if((fp==NULL)||(ft==NULL)||(fr==NULL))
  {  clrscr();
    puts("Can't open the FILE, in which, data is to be saved");
    exit(0);    }      n++;
  clrscr();
  time(&tp);
  t = localtime(&tp);
  strftime(line,1000,"%Z:->  %I: %M %p.; %d %B, %Y; (%A).",t);
  printf(" %s \n",line);
  printf("   Name & Designation:- %s, %s.\n",name,design);
  printf("   H.R.A.:-> '%c';     C.G.H.S.:-> '%c';     N.P.S.:-> '%c'.\n",hrag,ghsg,nps);
  printf("   Enter City Class:-  ");  scanf("%c %c",&dum,&clas);
  if((clas!='x')&&(clas!='y')&&(clas!='z')&&(clas!='X')&&(clas!='Y')&&(clas!='Z'))
  {  puts("   Invalid CITY CLASS..!");   err(&n);  }  //continue;  }
  printf("   Enter Level :-  ");   scanf("%s",&lev);
    if((strcmp(lev,"01")==0)||(strcmp(lev,"1")==0))  level = 1;
    else if((strcmp(lev,"02")==0)||(strcmp(lev,"2")==0))  level = 2;
    else if((strcmp(lev,"03")==0)||(strcmp(lev,"3")==0))  level = 3;
    else if((strcmp(lev,"04")==0)||(strcmp(lev,"4")==0))  level = 4;
    else if((strcmp(lev,"05")==0)||(strcmp(lev,"5")==0))  level = 5;
    else if((strcmp(lev,"06")==0)||(strcmp(lev,"6")==0))  level = 6;
    else if((strcmp(lev,"07")==0)||(strcmp(lev,"7")==0))  level = 7;
    else if((strcmp(lev,"08")==0)||(strcmp(lev,"8")==0))  level = 8;
    else if((strcmp(lev,"09")==0)||(strcmp(lev,"9")==0))  level = 9;
    else if(strcmp(lev,"10")==0)  level = 10;
    else if(strcmp(lev,"11")==0)  level = 11;
    else if(strcmp(lev,"12")==0)  level = 12;
    else if((strcmp(lev,"13a")==0)||(strcmp(lev,"13A")==0)||(strcmp(lev,"13")==0))
	level = 13;
    else if(strcmp(lev,"14")==0)  level = 14;
    else if(strcmp(lev,"15")==0)  level = 15;
    else if(strcmp(lev,"16")==0)  level = 16;
    else if(strcmp(lev,"17")==0)  level = 17;
    else if(strcmp(lev,"18")==0)  level = 18;
    else{  puts("   Invalid LEVEL..!");   err(&n);  }
  //a = level;
  printf("   Enter Basic Pay:-  Rs. ");  scanf("%lf",&basic);
  a = basic / 100;    b = 100.0 * a;
  if((basic!=b)||(basic<18000)||(basic>250000))
  {  puts("   Invalid BASIC PAY..!");   err(&n);  }  //continue;  }
  printf("   Enter D.A. % :-  ");  scanf("%lf",&dapercent);
  a = dapercent;
  if((dapercent<0)||(dapercent!=a))
  {  puts("   Invalid D.A.% ..!");   err(&n);  }  //continue;  }
  printf("   Enter Qualification/Special Pay (if any) :-  Rs. ");   scanf("%lf",&spay);
  a = spay;
  if((spay<0)||(spay!=a)){  puts("   Invalid QUALIFICATION/SPECIAL PAY..!");   err(&n);  }
  printf("   Enter Any other Pay Allowance (if any) :-  Rs. ");   scanf("%lf",&opay);
  a = opay;
  if((opay!=a)||(opay<0))
  {  puts("   Invalid other PAY ALLOWANCES..!");  err(&n);  }  //continue;  }
  da = dapercent * basic / 100;
  printf("   D.A.:-  Rs. %ld/-. \n",approx(da));
  c = approx(da);   da=c;
  if((clas=='z')||(clas=='Z'))   hrapercent = 8;
  else if((clas=='y')||(clas=='Y'))   hrapercent = 16;
  else   hrapercent = 24;
  if((hrag=='n')||(hrag=='N'))   hrapercent = 0;
  hra = hrapercent * basic / 100;
  printf("   H.R.A.(%ld %):- ",approx(hrapercent));  printf(" Rs. %ld/-. \n",approx(hra));
  c = approx(hra);   hra=c;
  if((clas=='x')||(clas=='X')) {
    if(level<=2)   trans = 1800;
    else if(level<=8)   trans = 3600;
    else   trans = 7200;
  }
  else{
    if(level<=2)   trans = 900;
    else if(level<=8)   trans = 1800;
    else   trans = 3600;
  }
  daonta = dapercent * trans / 100;
  printf("   D.A. on Transport:-  Rs. %ld/-. \n",approx(daonta));
  c = approx(daonta);   daonta=c;
  ta = trans + daonta ;
  printf("   Transport Allowance(%ld + %ld):- ",approx(trans), approx(daonta));
  printf("   Rs. %ld/-. \n",approx(ta));
  c = approx(ta);   ta=c;
  gross = basic + da + hra + ta + spay + opay;
  printf("   Gross Income:-  Rs. %ld/-. \n",approx(gross));
  c = approx(gross);   gross=c;
  printf("   ENTER Professional tax (if any) :-  Rs. ");   scanf("%lf",&ptax);
  a = ptax;
  if((ptax<0)||(ptax!=a))
  {  puts("   Invalid PROFESSIONAL TAX..!");  err(&n);   }  //continue;  }
  printf("   ENTER Income Tax (if any) :-  Rs. ");   scanf("%lf",&itax);
  a = itax;
  if((itax!=a)||(itax<0))
  {  puts("   Invalid INCOME TAX..!");   err(&n);   }  //continue;   }
  het = 0.04 * itax;
  printf("   Health & Education Tax:-  Rs. %ld/- . \n",approx(het));
  c = approx(het);   het=c;
  if((nps=='y')||(nps=='Y'))
  {   gpf = 0;
    printf("   G.P.F. Subscription :-  Rs. %ld/- . \n",approx(gpf));
  }
  else{
    printf("   ENTER G.P.F. Subscription (if any) :-  Rs. ");   scanf("%lf",&gpf);
    a = gpf;    c = 0.06 * basic;
    if((gpf!=a)||(gpf>basic)||(gpf<c))
    {  puts("   Invalid GPF Subscription..!");   err(&n);   }  //continue;   }
  }
  printf("   ENTER any other Recovery (if any) :-  Rs. ");   scanf("%lf",&recovery);
  a = recovery;
  if((recovery!=a)||(recovery<0))
  {  puts("   Invalid Other RECOVERIES..!");   err(&n);   }  //continue;   }
  if(level<=5) {  cghs = 250;   insurance = 30;  }
  else if(level==6)   cghs = 450;
  else if(level<=11)   cghs = 650;
  else   cghs = 1000;
  if((ghsg=='n')||(ghsg=='N'))   cghs = 0;
  printf("   C.G.H.S. :-  Rs. %ld/-. \n",approx(cghs));
  if(level>=6)   insurance = 60;
  if(level>=10)   insurance = 120;
  printf("   Group INSURANCE:-  Rs. %ld/-. \n",approx(insurance));
  pension = (basic + da) * 0.1;
  if((nps=='n')||(nps=='N'))   pension = 0;
  printf("   N.P.S. Recovery:-  Rs. %ld/-. \n",approx(pension));
  c = approx(pension);   pension=c;
  deduction = cghs + insurance + pension + ptax + itax + het + gpf + recovery;
  printf("   Total DEDUCTION :-  Rs. %ld/-. \n",approx(deduction));
  c = approx(deduction);    deduction = c;
  totalincome = gross - deduction;
  printf("   Net INCOME (%ld - %ld):- ",approx(gross),approx(deduction));
  printf(" Rs. %ld/-. \n",approx(totalincome));
  c = approx(totalincome);    totalincome = c;
  VERSION;
  textcolor(BLUE);
  textbackground(WHITE);
  cprintf(INTRO);
  fprintf(fp,"#   %s (%s) :- ",name,design);
  fprintf(fp," Rs. %ld/- . \n ",approx(totalincome));
  fprintf(ft,"#\n  Name:-  %s\n",name);
  fprintf(ft,"  Designation :-  %s\n",design);
  fprintf(ft," City Class :-  %c\n",clas);
  fprintf(ft," Level :-  %s \n",lev);
  fprintf(ft," Basic Pay :-  Rs. %ld/- \n",approx(basic));
  fprintf(ft," D.A. (%ld %) :- ",approx(dapercent));   fprintf(ft," Rs. %ld/- \n",approx(da));
  fprintf(ft," H.R.A.(%ld %) :- ",approx(hrapercent));  fprintf(ft," Rs. %ld/- \n",approx(hra));
  fprintf(ft," D.A. on Transport:-  Rs. %ld/-. \n",approx(daonta));
  fprintf(ft," Transport Allowance(%ld + %ld):- ",approx(trans), approx(daonta));
  fprintf(ft," Rs. %ld/-. \n",approx(ta));
  fprintf(ft," Qualification/Special Pay :-  Rs. %ld/- \n",approx(spay));
  fprintf(ft," Any other Pay Allowance :-  Rs. %ld/- \n",approx(opay));
  fprintf(ft," Gross Income :-  Rs. %ld/-. \n",approx(gross));
  fprintf(ft," C.G.H.S. :-  Rs. %ld/- \n",approx(cghs));
  fprintf(ft," Group INSURANCE:-  Rs. %ld/- \n",approx(insurance));
  fprintf(ft," NPS Recovery:-  Rs. %ld/- \n",approx(pension));
  fprintf(ft," GPF Subscription :-  Rs. %ld/- \n",approx(gpf));
  fprintf(ft," Professional tax :-  Rs. %ld/- \n",approx(ptax));
  fprintf(ft," Income Tax :-  Rs. %ld/- \n",approx(itax));
  fprintf(ft," Health & Education Tax:-  Rs. %ld/- \n",approx(het));
  fprintf(ft," Any other Recovery :-  Rs. %ld/- \n",approx(recovery));
  fprintf(ft," Total DEDUCTION :-  Rs. %ld/-. \n",approx(deduction));
  fprintf(ft," Net INCOME (%ld - %ld):- ",approx(gross),approx(deduction));
  fprintf(ft," Rs. %ld/-. \n \n",approx(totalincome));
  fprintf(fr,"#   %s (%s) :- ",name,design);   fprintf(fr," Rs. %ld/- .  ",approx(totalincome));
  if((nps=='y')||(nps=='Y'))     fprintf(fr," {nps} \n \n");
  else     fprintf(fr," {gpf} \n \n");
  time(&tp);
  t = localtime(&tp);
  strftime(line,1000,"   End Time is %I : %M : %S %p.\n   Date is %d %B, %Y;\n   Day is %A (%w);\n   Week of the YEAR:-> %W ;\n   Day of the YEAR:-> %j ;\n   Time-zone is %Z . \n",t);
  fprintf(ft,"%s \n",lt);
  fprintf(ft,"   Total time taken:- %f sec.\n",difftime(tp,tr));
  fprintf(fp,"   Total time taken:- %f sec.\n \n",difftime(tp,tr));
  fprintf(ft,"%s \n \n \n",line);
  fclose(fp);
  fclose(ft);
  fclose(fr);
  getch();
 //}
}

//This is my starting with the programs having open source License, so please do tell me if I do any mistakes regarding Copyrights & License!
//ALERT: This program is for private/public use.
//Patent Use:-  Not allowed right now
//Also, I don't take the responsibilities regarding the misuses of this program.
