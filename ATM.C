

void main()
{
int c=8923;
int pin=0,npin=8923,cpin=0;
long int dep=0;
long int bal=0;
long int f,s;
long int e,t,temp=0;
int g,h,i;
int x,a,cf,d;
int b,j;
char k;

clrscr();
printf("\n\n \t\t\t********** PROJECT ***********");
printf("\n\n\t\t  ************** ATM MANAGEMENT SYSTEM ****************\n\n");


do
{
printf("\n\t\t      press enter to continue......");
a=getch();


if(a==13)
{
//sound(500);
clrscr();
printf("\n\n\n***** welcome to atm ******\n");
//delay(500);
//nosound();
}
else
{
sound(500);
printf("\n\ninvalid input\n\n");
delay(500);
nosound();
}
}
 while(a!=13);

zzz:
c=npin;
do
{
printf("\n\nenter card no :");
scanf("%d",&b);

if(b==1234)
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();
printf("\n\nprocessing........");
delay(700);
clrscr();

//sound(3000);
printf("\n\ncard accepted........");
//delay(500);
//nosound();
}
else
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();

sound(4000);
printf("\n\ninvalid card number ....please try again\n");
delay(500);
nosound();
}
}
while(b!=1234);

do
{
ca:
printf("\n\nenter card pin :");
scanf("%d",&c);

printf("\n\nconfirm card pin :");
scanf("%d",&cf);
if(c!=cf)
{
printf("\n\ncard pin does not match");
printf("\n\nplease try again");
printf("\n\n***************************************");
delay(1700);
clrscr();
goto ca;
}
else
{

if(c==npin)
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();
printf("\n\nprocessing........");
delay(700);
clrscr();

//sound(3000);
printf("correct pin.....\n");
//delay(1000);
//nosound();

clrscr();
printf("\n ****** WELCOME ******");
delay(400);
}
else
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);

sound(3000);
printf("invalid pin....please enter pin again\n");
delay(500);
nosound();
}
}
}
while(c!=npin);


while(1)
{
gg:
printf("\n\n********* MENU **********\n");
printf("\n 1. DEPOSIT ");
printf("\n 2. WITHDRAWAL ");
printf("\n 3. CHECK BALANCE ");
printf("\n 4. HELP  ");
printf("\n 5. CHANGE CARD PIN ");
printf("\n 6. EXIT  ");

printf("\n\nplease choose any option : ");
scanf("%d",&d);

switch(d)
{
case 1:
clrscr();
dd:
printf("\nenter the amount to deposit :");
scanf("%ld",&f);
clrscr();
printf("\nconfirm the amount to deposit :");
scanf("%ld",&s);
if(f!=s)
{
printf("\nur earlier entered amount was %ld\n",f);
printf("\n\namount does not match.......\n\n");
printf("**********************************************\n\n");
goto dd;
}
else
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();

if(f<500)
{
printf("\ncannot deposit amount less than 500");
}
else if(f>10000)
{
printf("cannot deposit money more than 10000 ");
}
else
{
dep=dep+f;
temp=dep;
printf("\n\nur new balance is %ld",dep);
}
}
break;

case 2:
clrscr();
ff:
printf("\nenter the amount to withdraw :");
scanf("%ld",&e);
clrscr();
printf("\nconfirm the amount to withdraw :");
scanf("%ld",&t);
if(e!=t)
{
printf("\nur entered is %ld\n",e);
printf("\namount does not match.......\n\n");
printf("****************************************\n\n");
goto ff;
}
else
{
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();
printf("\n\nprocessing........");
delay(700);
clrscr();


if(e<500||e>10000)
{
printf("\ncannot withdraw money less than 500 and 10000 ");
}
else if(dep==0)
{
printf("ur balance is %d",dep);
printf(".....please deposit the money first");
}
else
{
bal=dep-e;
temp=bal;
printf("\nmoney withdrawn %d",e);
printf("ur new balance is %ld",bal);
}
}
break;

case 3:
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n\nprocessing.......");
delay(700);
clrscr();
printf("\n\nprocessing........");
delay(700);
clrscr();


printf("\nur new balance is %ld",temp);
break;

case 4:
clrscr();
clrscr();
printf("\n\nprocessing....");
delay(700);
clrscr();
printf("\n\nprocessing.....");
delay(700);
clrscr();
printf("\n\nprocessing......");
delay(700);
clrscr();
printf("\n ****** HELP ******");
printf("\n STEP 1: please insert card no....");
printf("\n STEP 2: please insert pin no.....");
printf("\n STEP 3: please select given options....");
printf("\n\n  GOOD LUCK..... press enter to continue.....");

getch();
clrscr();
break;


case 5:
rp:
clrscr();
printf("\nenter old pin :");
scanf("%d",&pin);
delay(1000);
if(pin!=8923)
{
printf("\n\nold password is wrong......please try again");
delay(2000);
goto rp;
}
else
{
wpin:
clrscr();
printf("\n\nenter new pin :");
scanf("%d",&npin);
printf("\n\nconfirm new pin :");
scanf("%d",&cpin);
if(npin!=cpin)
{
printf("\n\nnew passsword does not match....please try again");
delay(2000);
goto wpin;
}
else
{
c=npin;
clrscr();
printf("\n\nur pin has been changed .....Restarting system...");
delay(1500);
goto zzz;
}
}


case 6:
ss:
clrscr();

printf("\n\ndo u like our service....");
printf("\n\npress Y for yes");
printf("\n\npress N for no");
k=getch();
if(k=='Y'||k=='y')
{
delay(500);
clrscr();
printf("\n\nthank u for using atm....\n\ngood luck.....");
delay(2000);
}
else if(k=='N'||k=='n')
{
delay(500);
clrscr();
printf("\n\nsorry for inconvinience....");
delay(2000);
}
else
{
clrscr();
sound(1000);
delay(500);
nosound();
printf("\n\ninvalid choice....");
delay(1000);
goto ss;
}

delay(1500);
exit();



default:
{
clrscr();
delay(100);
printf("\n\nplease choose valid option......");
delay(1000);
goto gg;

}

}

}
getch();
}
