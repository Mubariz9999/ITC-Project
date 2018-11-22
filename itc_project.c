#include<conio.h>
#include<windows.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
int welcome();
int login(char [],char []);
void admin();
void create_account();
void admin_menu();
void edit();
void user_info();
int edit_info(char []);//info ki file person k data k line num;
void copy_info(char [],int);
void for_user();
void delet();//info delet karega
void account_file_delet(char []);//password wali file mese delet krega
void account_delet(char []);//account file mese delet kerga
struct record{
		char fn[20];//first name
	char ln[20];//last name
	
	char ffn[20];//father first name
	char fln[20];//father last name
	char code[20];//code
	char pswrd[30];//pswrd
	char add[30];//address
	char cnic[40];//cnic
	char money[30];//money
	char tel[20];
	char phone[20];
	char dat[20];
};
struct account{
	char id[100];
	char pswrd[100];
};
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
if(welcome()==0){
	return 0;
}
}
int welcome(){
	int n;
	char ln1[]="         WELCOME";
	char ln2[]="      TO         THE";
	char ln3[]="  BANK MANAGEMENT SYSTEM";
	char ln4[]="     1->For Admin";
	char ln5[]="     2->For User";
	char ln6[]="     3->Exit";
	int i,len,j=0;
	char pswrd[100],c;
	len=strlen(ln1);
	printf("\n\n\n\n\n\t\t\t");
	for(i=0;i<len;i++){
		printf("%c",ln1[i]);
		Sleep(30);
	}
	printf("\n\t\t\t");
	len=strlen(ln2);
	for(i=0;i<len;i++){
		printf("%c",ln2[i]);
	Sleep(30);
	}
	printf("\n\t\t\t");
	len=strlen(ln3);
	for(i=0;i<len;i++){
		printf("%c",ln3[i]);
		Sleep(30);
	}
	printf("\n\n\n\t\t\t");
	len=strlen(ln4);
	for(i=0;i<len;i++){
		printf("%c",ln4[i]);
		Sleep(30);
	}
	printf("\n\n\t\t\t");
	len=strlen(ln5);
	for(i=0;i<len;i++){
		printf("%c",ln5[i]);
		Sleep(30);
	}
	printf("\n\n\t\t\t");
	len=strlen(ln6);
	for(i=0;i<len;i++){
		printf("%c",ln6[i]);
		Sleep(30);
	}
	printf("\n\n\t\t\t\t  ");
	scanf("%d",&n);
	switch(n){
		case 1:{
			system("cls");
			admin();
			break;
		}
		case 2:{
			system("cls");
			 for_user();
			break;
		}
		case 3:{
			return 0;
			
			break;
		}
		default:{
			
		
			printf("\n\n\t\t\t  ");
			printf("Wrong Statement\n");
			sleep(3);
			system("cls");
			main();
	
break;	
}
	}
	
	
	
}
void admin(){
	char c,ln1[]="    Admin\n\n\t\t\t  Enter Password";
char pswrd[100];
int k;
	
	int j,i,len=strlen(ln1);
	k=0;
do{	
printf("\n\n\n\n\n\t\t\t  ");
	for(i=0;i<len;i++){
		printf("%c",ln1[i]);
		Sleep(50);
	}
	printf("\n\t\t\t  ");
	
	
		
		
           j =0;	
		while(1){
		
		c=getch();
		if(c==13){
			pswrd[j]='\0';
			break;
		}else
		if(c==8){
			if(j>0){
				j--;
				printf("\b \b");
			}
		}else
		if(c==9 || c==32){
			continue;
		}else{
			pswrd[j]=c;
			j++;
			printf("*");
		}
		
}printf("\n\n\t\t\t loading...\n\t\t\t ");
  for(j=0;j<=16;j++){
      printf("%c",177);
    Sleep(50);
	}
	if(strcmp(pswrd,"back")==0){//wapis manu pr ajaenge
	system("cls");
	main();
}
if(strcmp(pswrd,"ali12345")!=0){
	
	k++;
	
	printf("\n\n\t\t\t  wrong password");
	
		if(k>0 &&k<6){
			gotoxy(60,10);
			printf("%d",k);
		
		}
		if(k==3){
			sleep(1);
			printf("\bGO BACK..");
			sleep(2);
			system("cls");
			main();
		}
	sleep(2);
	system("cls");
		
	
}

}while(strcmp(pswrd,"ali12345")!=0);
 if(strcmp(pswrd,"ali12345")==0){//admin menu ajaega
 	system("cls");
	 admin_menu();
 }
	
	
}
void admin_menu(){//admin menu hy
int n;
system("cls");
	printf("\n\n\n\t\t\t\t");
	printf("MANAGEMENT\n");
Sleep(300);
printf("\n\n\t\t\t\t");
printf("1:Create Account\n");

Sleep(300);
printf("\n\t\t\t");
printf("2:Edit Account\n");
printf("\n\t\t\t\t");
Sleep(300);

printf("3:User Info.\n");
printf("\n\t\t\t");
Sleep(300);
printf("4:Delete Account\n");
Sleep(300);
printf("\n\t\t\t\t");

printf("5:Exit\n");	
printf("\n\t\t\t\t");
	scanf("%d",&n);
	switch(n){
		
		case 1:{
		create_account();
			break;
		}
		case 2:{
			edit();
			break;
		}
		case 3:{
			system("cls");
			user_info();
			
			break;
		}
		case 4:{
			system("cls");
			delet();
			
			break;
		}
	
		
		case 5:{
			system("cls");
			main();
			break;
		}
		
		default:
			printf("\t\t\twrong statement\n");
			Sleep(900);
			system("cls");
			admin_menu();
		
		
		
		
		
		
		
	}	
}
void create_account(){
	char fn[100];//first name
	char ln[100];//last name
	
	char ffn[100];//father first name
	char fln[100];//father last name
	char code[100];//code
	char pswrd[100];//pswrd
	char add[100];//address
	char cnic[100];//cnic
	char money[100];//money
	char tel[20];
	char phone[20];
	char dat[20];
	FILE *fp;


	fp=fopen("account_code.txt","a+");
	
	fclose(fp);
	fp=fopen("account_code.txt","r");
char a[10000][50];
int i=0;
while(!feof(fp)){
	fscanf(fp,"%s",&a[i]);
	i++;
}
fclose(fp);
system("cls");
fp=fopen("account_code.txt","a+");
	printf("\n\n\t\t\tCREATE ACCOUNT\n");
	printf("\n\n\t\t\t  .NAME\n");
	printf("\n\t\t\tFirst Name-->");
	scanf("%s",&fn);
	printf("\n\t\t\tLast Name-->");
	scanf("%s",&ln);
	printf("\n\t\t\t .FATHER NAME");
	printf("\n\n\t\t\tFirst Name-->");
	scanf("%s",&ffn);
	printf("\n\t\t\tLast Name-->");
	scanf("%s",&fln);
	printf("\n\t\t\t.Date Of Birth(date/month/year)\n\t\t\t-->");
	scanf("%s",&dat);
	printf("\n\t\t\t.Address(House no./Area/City)\n\t\t\t-->");
	scanf("%s",&add);
	printf("\n\t\t\t.Telephone Number-->");
	scanf("%s",&tel);
    printf("\n\t\t\t.Mobile Number-->");
	scanf("%s",&phone);
	printf("\n\t\t\t.CNIC-->");
	scanf("%s",&cnic);
	printf("\n\t\t\t.Add Money-->");
	scanf("%s",&money);
code1:	printf("\n\t\t\t.Account Code-->");
fflush(stdin);
	scanf("%s",&code);
	int j,flag=0;
	for(j=0;j<i;j++){
		if(strcmp(a[j],code)==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("\n\t\tThis code is already registered\n");
		goto code1;
	}
	fprintf(fp,"\n%s",code);
	fclose(fp);
	char cd[100];
	strcpy(cd,code);

	
	strcat(cd,".txt");

fp=fopen(cd,"w");
    
       fprintf(fp,"\n%s\t",fn);
       fprintf(fp,"%s\t",ln);
       fprintf(fp,"%s\t",ffn);
       fprintf(fp,"%s\t",fln);
       fprintf(fp,"%s\t",dat);
       fprintf(fp,"%s\t",add);
       fprintf(fp,"%s\t",&tel);
       fprintf(fp,"%s\t",&phone);
       fprintf(fp,"%s\t",cnic);
	   fprintf(fp,"%s\t",money);
    fprintf(fp,"%s\t",code);
    fclose(fp);
	printf("\n\t\t\t.Password-->");
	scanf("%s",&pswrd);
	fp=fopen("passwords.txt","a+");
	fprintf(fp,"\n%s    ",code);
	fprintf(fp,"%s",pswrd);
fclose(fp);
	fp=fopen("info.txt","a+");
	
       fprintf(fp,"\n%s\t",fn);
       fprintf(fp,"%s\t",ln);
       fprintf(fp,"%s\t",ffn);
       fprintf(fp,"%s\t",fln);
       fprintf(fp,"%s\t",dat);
	   fprintf(fp,"%s\t",add);
	   fprintf(fp,"%s\t",tel);
       fprintf(fp,"%s\t",phone);
       fprintf(fp,"%s\t",cnic);
	   fprintf(fp,"%s\t",money);
	   fprintf(fp,"%s\t",code);
       fprintf(fp,"%s\t",pswrd);
       fclose(fp);
       printf("\t\t\tAccount complete");
       
       Sleep(900);
       system("cls");
       admin_menu();
		
}

void user_info(){
struct record	a[1000];
	FILE *fp;
int j,i=0;
char name[100];
char last[100];
	fp=fopen("info.txt","r");

	while(!feof(fp)){
	


    fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
       fscanf(fp,"%s",&a[i].pswrd);
       i++;

}
j=i;
fclose(fp);
printf("\n\n\t\t\tsearch.");
printf("\n\n\t\t\tenter first name\n\t\t\t");
scanf("%s",&name);
printf("\n\n\n");
int flag=0;
for(i=0;i<j;i++){
	if(strcmp(a[i].fn,name)==0){
		flag=1;
	    printf("\t\t\tName:------------------>%s %s\n",a[i].fn,a[i].ln);
        printf("\t\t\tFather Name:----------->%s %s\n",a[i].ffn,a[i].fln);
        printf("\t\t\tDate Of Birth:--------->%s\n",a[i].dat);
	    printf("\t\t\tAddress:--------------->%s\n",a[i].add);
	    printf("\t\t\tTelephone:------------->%s\n",a[i].tel);
        printf("\t\t\tMobile number:--------->%s\n",a[i].phone);
        printf("\t\t\tCnic:------------------>%s\n",a[i].cnic);
	    printf("\t\t\tMoney:----------------->%s\n",a[i].money);
	    printf("\t\t\tAccount Code:---------->%s\n",a[i].code);
        printf("\t\t\tPassword:-------------->%s\n\n\n",a[i].pswrd);	
	}
}
if(flag==0){
	printf("unknown user\n");
}
char ans;

printf("do you want to search again press yes(y) No(any key)\n");
fflush(stdin);
scanf("%c",&ans);
if(ans=='y'||ans=='Y'){
	system("cls");
user_info();
}
system("cls");
admin_menu();
}
void edit(){
	system("cls");
		char fn[100];//first name
	char ln[100];//last name
	
	char ffn[100];//father first name
	char fln[100];//father last name
	char code[100];//code
	char pswrd[100];//pswrd
	char add[100];//address
	char cnic[100];//cnic
	char money[100];//money
	char tel[20];
	char phone[20];
	char dat[20];
	FILE *fp;
	int c;
	printf("\n\n\n\t\t\t  Edit Account");
	Sleep(100);
	printf("\n\n\t\t\t  Enter Code\n\t\t\t  ");
	scanf("%s",&code);
  
	printf("\n\n\t\t\t  Enter Password\n\t\t\t  ");
	 int j =0;	
		while(1){
		
		c=getch();
		if(c==13){
			pswrd[j]='\0';
			break;
		}else
		if(c==8){
			if(j>0){
				j--;
				printf("\b \b");
			}
		}else
		if(c==9 || c==32){
			continue;
		}else{
			pswrd[j]=c;
			j++;
			printf("*");
		}
	}
	j=0;
    c=login(code,pswrd);
    if(c==0){
    	strcat(code,".txt");
    	fp=fopen(code,"r");
    	char a[100][50];
    	int i=0;
    	while(!feof(fp)){
    		fscanf(fp,"%s",a[i]);
    		i++;
		}
		fclose(fp);
		int cont=edit_info(code);
		
		


		system("cls");
		
wapis:		printf("\n\n\t\t\t\tAccount\n\n");Sleep(100);
		  printf("\t\t\tName:------------------>%s %s\n",a[0],a[1]);Sleep(100);
        printf("\t\t\tFather Name:----------->%s %s\n",a[2],a[3]);Sleep(100);
        printf("\t\t\tDate Of Birth:--------->%s\n",a[4]);Sleep(100);
	    printf("\t\t\tAddress:--------------->%s\n",a[5]);Sleep(100);
	    printf("\t\t\tTelephone:------------->%s\n",a[6]);Sleep(100);
        printf("\t\t\tMobile number:--------->%s\n",a[7]);Sleep(100);
        printf("\t\t\tCnic:------------------>%s\n",a[8]);Sleep(100);
	    printf("\t\t\tMoney:----------------->%s\n",a[9]);Sleep(100);
	    printf("\t\t\tAccount Code:---------->%s\n\n\n",a[10]);Sleep(100);
	    printf("\n\t\tDo you want to edit your info? YES(y) / N0(any key)\n\t\t\t\t");
	     
		   fflush(stdin);
	    	    
	

	    if(getche()!='y'&& getche()!='Y'){
	    	fp=fopen(code,"w");
	    	int j=0;
	    	while(j<i){
	    		fprintf(fp,"%s   ",a[j]);
	    		j++;
			}
			fclose(fp);
			copy_info(code,cont);
			// back jana hy 
			admin_menu();
		}
   Sleep(100);Sleep(100);
   system("cls");
   printf("\n\t\t\t EDIT");Sleep(100);
     printf("\n\t\t\t1:Name");Sleep(100);
        printf("\n\t\t\t2:Father Name");Sleep(100);
        printf("\n\t\t\t3:Date Of Birth");Sleep(100);
	    printf("\n\t\t\t4:Address");Sleep(100);
	    printf("\n\t\t\t5:Telephone");Sleep(100);
        printf("\n\t\t\t6:Mobile");Sleep(100);
        printf("\n\t\t\t7:Cnic\n\t\t\t    ");Sleep(100);
	  
   
   	Sleep(100);
   int ans;
   scanf("%d",&ans);
   if(ans<=0 || ans>7){
   	system("cls");
   	goto wapis;
   }
   switch(ans){
   	case 1:{
   		system("cls");
   		printf("\n\n\t\t\t  .NAME\n");
	printf("\n\t\t\tFirst Name-->");
	scanf("%s",&fn);
	printf("\n\t\t\tLast Name-->");
	scanf("%s",&ln);
	strcpy(a[0],fn);
	strcpy(a[1],ln);
	Sleep(900);
	system("cls");
	goto wapis;
	
		break;
	   }
	   case 2:{
	   	system("cls");
	   		printf("\n\t\t\t .FATHER NAME");
	printf("\n\n\t\t\tFirst Name-->");
	scanf("%s",&ffn);
	printf("\n\t\t\tLast Name-->");
	scanf("%s",&fln);
	strcpy(a[2],ffn);
	strcpy(a[3],fln);
	Sleep(900);
	system("cls");
	goto wapis;	
		break;
	   }
	   case 3:{
	   	system("cls");
	   	printf("\n\t\t\t.Date Of Birth(date/month/year)\n\t\t\t-->");
	scanf("%s",&dat);
	strcpy(a[4],dat);
	Sleep(900);
	system("cls");
	goto wapis;	
		break;
	   }
	   case 4:{
	   	system("cls");
	   		printf("\n\t\t\t.Address(House no./Area/City)\n\t\t\t-->");
	scanf("%s",&add);
	strcpy(a[5],add);
	Sleep(900);
	system("cls");
	goto wapis;	
		break;
	   }
	   case 5:{
	   	system("cls");
	   		printf("\n\t\t\t.Telephone Number-->");
	scanf("%s",&tel);
	strcpy(a[6],tel);
	Sleep(900);
	
	system("cls");
	goto wapis;	
		break;
	   }
	   
	   case 6:{
	   	system("cls");
	   	printf("\n\t\t\t.Mobile Number-->");
	scanf("%s",&phone);
	strcpy(a[7],phone);
	Sleep(900);
	system("cls");
	goto wapis;	
		break;
	   }
	   case 7:{
	   	system("cls");
	   	printf("\n\t\t\t.CNIC-->");
	scanf("%s",&cnic);
	strcpy(a[8],cnic);
	Sleep(900);
	system("cls");
	goto wapis;	
		break;
	   }
	   default:
	   	printf("\t\t\twrong statement");
	   	system("cls");
	   goto wapis;
	  
	  
   }

	}else{
		Sleep(800);
		system("cls");
	admin_menu();	//admin manu
	}
admin_menu();//djyfdjhvfgsdvfhvshdsjkdbh
}
int login(char code[],char pswrd[]){
	int cnt=0;
    int k;
	char code1[10000][100];
	FILE *fp;

	fp=fopen("passwords.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%s",&code1[cnt]);
		cnt++;	
	}
	fclose(fp);
	int j,i;
	

		int flag=0,b;
		for(i=0;i<cnt;i++){
			if(i%2==0){
				if(strcmp(code,code1[i])==0){
					flag=1;
					b=i;
				}
			}
		}
	int num=0;
		if(flag==0){
			printf("\n\t\tinvalid code and password\n");
			return 1;
			}
		if(flag==1){
		   if(strcmp(pswrd,code1[b+1])!=0){
	    	printf("\n\n\t\t\tinvalid paswrd");
	    return 1;
		}
	}		
printf("\n\n\t\t\t loading...\n\t\t\t ");
  for(j=0;j<=16;j++){
      printf("%c",177);
    Sleep(50);
	}
	return num;
}
int edit_info(char ab[]){
	struct record	a[1000];
	char b[100][50];
	FILE *fp;
int j=0,i=0;
char name[100];
char last[100];
	fp=fopen("info.txt","r");

	while(!feof(fp)){
	


    fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
       fscanf(fp,"%s",&a[i].pswrd);
       i++;

}
fclose(fp);

fp=fopen(ab,"r");
while(!feof(fp)){
	fscanf(fp,"%s",&b[j]);
	j++;
}
fclose(fp);
int k;
int cnt=0;
int itr=0;
for(k=0;k<i;k++){
	cnt=0;

	if(strcmp(a[k].fn,b[0])==0){
		cnt++;	
		if(strcmp(a[k].ln,b[1])==0){
		cnt++;
		if(strcmp(a[k].ffn,b[2])==0){
		cnt++;
		if(strcmp(a[k].fln,b[3])==0){
		cnt++;
		if(strcmp(a[k].dat,b[4])==0){
		cnt++;
		if(strcmp(a[k].add,b[5])==0){
		cnt++;
		if(strcmp(a[k].tel,b[6])==0){
		cnt++;
		if(strcmp(a[k].phone,b[7])==0){
		cnt++;
		if(strcmp(a[k].cnic,b[8])==0){
		cnt++;
		itr=k;
	break;
		
		}
		
		}
		
		}
		
		}
		
		}
		
		}
		
		}
		
		}
		
		}
	

}
return itr;
}
void copy_info(char ab[],int n){
		struct record	a[1000];
	char b[100][50];
	FILE *fp;
int j=0,i=0;
char name[100];
char last[100];
	fp=fopen("info.txt","r");

	while(!feof(fp)){
	


    fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
       fscanf(fp,"%s",&a[i].pswrd);
       i++;
       

}
fclose(fp);

fp=fopen(ab,"r");
while(!feof(fp)){
	fscanf(fp,"%s",&b[j]);
	j++;
}
fclose(fp);
strcpy(a[n].fn,b[0]);

strcpy(a[n].ln,b[1]);

strcpy(a[n].ffn,b[2]);

strcpy(a[n].fln,b[3]);

strcpy(a[n].dat,b[4]);

strcpy(a[n].add,b[5]);

strcpy(a[n].tel,b[6]);

strcpy(a[n].phone,b[7]);

strcpy(a[n].cnic,b[8]);

strcpy(a[n].money,b[9]);
	fp=fopen("info.txt","w");
j=0;
	while(j<i-1){
	


    fprintf(fp,"\n%s\t",a[j].fn);
        fprintf(fp,"%s\t",a[j].ln);
        fprintf(fp,"%s\t",a[j].ffn);
        fprintf(fp,"%s\t",a[j].fln);
        fprintf(fp,"%s\t",a[j].dat);
	    fprintf(fp,"%s\t",a[j].add);
	    fprintf(fp,"%s\t",a[j].tel);
        fprintf(fp,"%s\t",a[j].phone);
        fprintf(fp,"%s\t",a[j].cnic);
	    fprintf(fp,"%s\t",a[j].money);
	    fprintf(fp,"%s\t",a[j].code);
        fprintf(fp,"%s\t",a[j].pswrd);
       j++;
       

}
fclose(fp);
}
void for_user(){
	system("cls");
	char code[100];
	char pswrd[100];
	char ch;
	struct record a[1000];
	int j=0,c;
	printf("\n\n\t\t\tFOR USER\n\n\n");
	printf("\t\t\tENTER CODE\n\t\t\t");
	scanf("%s",&code);
	printf("\n\n\t\t\tENTER PASSWORD\n\t\t\t");
		while(1){
		
		ch=getch();
		if(ch==13){
			pswrd[j]='\0';
			break;
		}else
		if(ch==8){
			if(j>0){
				j--;
				printf("\b \b");
			}
		}else
		if(ch==9 || ch==32){
			continue;
		}else{
			pswrd[j]=ch;
			j++;
			printf("*");
		}
	}
	j=0;
    c=login(code,pswrd);
if(c==0){
	int i=0;
	FILE *fp;
	strcat(code,".txt");
		fp=fopen(code,"r");

	while(!feof(fp)){
	


    fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
    
       i++;

}

fclose(fp);
	
wapis:	system("cls");
		printf("\n\n\t\tAccount\n\n");Sleep(100);
	
		  printf("\tName");Sleep(100);
          printf(":------------------>");Sleep(100);
		  printf("%s %s\n\n",a[0].fn,a[0].ln);Sleep(100);
	   
	    printf("\tFather Name");Sleep(100);
	    printf(":----------->");Sleep(100);
	    printf("%s %s\n\n",a[0].ffn,a[0].fln);Sleep(100);
	    
	    
        printf("\tDate Of Birth");Sleep(100);
        printf(":--------->");Sleep(100);
	    printf("%s\n\n",a[0].dat);Sleep(100);
		printf("\tAddress");Sleep(100);
	    printf(":--------------->");Sleep(100);
	    printf("%s\n\n",a[0].add);Sleep(100);
		printf("\tTelephone");Sleep(100);
        printf(":------------->");Sleep(100);
        printf("%s\n\n",a[0].tel);Sleep(100);
		printf("\tMobile number");Sleep(100);
        printf(":--------->");Sleep(100);
        printf("%s\n\n",a[0].phone);Sleep(100);
		printf("\tCnic");Sleep(100);
	    printf(":------------------>");Sleep(100);
	    printf("%s\n\n",a[0].cnic);Sleep(100);
		printf("\tMoney");Sleep(100);
	    printf(":----------------->");Sleep(100);
	    printf("%s\n\n",a[0].money);Sleep(100);
		printf("\tAccount Code");Sleep(100);
	    printf(":---------->");Sleep(100);
	    printf("%s\n\n",a[0].code);Sleep(100);
	   
	    
	
	gotoxy(53,2);Sleep(100);
	printf("         MENU");
	gotoxy(53,4);Sleep(100);
	printf("  |  1:Deposit");
	gotoxy(53,6);Sleep(100);
	printf("  |  2:Withdraw");
	gotoxy(53,8);Sleep(100);
	printf("  |  3:TRANSfer to");
	gotoxy(53,9);Sleep(100);
	printf("      Other account");
	gotoxy(53,11);Sleep(100);
	printf("  |  4:Exit");
	
	
	int ans;
	gotoxy(59,13);
	scanf("%d",&ans);
		long int p=atoi(a[0].money);
			long int am;
			char snum[50];
	switch(ans){
		case 1:{
			system("cls");
			 p=atoi(a[0].money);
			
			
			printf("\n\n\n\t\t\tEnter Amount: ");
			scanf("%ld",&am);

			p=p+am;		
		// convert 123 to string [buf]
          itoa(p, snum, 10);
			
			
			strcpy(a[0].money,snum);
			 system("cls");
			 fp=fopen(code,"w");
			 
			   fprintf(fp,"%s  ",a[0].fn);
       fprintf(fp,"%s   ",a[0].ln);
       fprintf(fp,"%s   ",a[0].ffn);
       fprintf(fp,"%s   ",a[0].fln);
       fprintf(fp,"%s   ",a[0].dat);
	   fprintf(fp,"%s   ",a[0].add);
	   fprintf(fp,"%s   ",a[0].tel);
       fprintf(fp,"%s   ",a[0].phone);
       fprintf(fp,"%s   ",a[0].cnic);
	   fprintf(fp,"%s   ",a[0].money);
	   fprintf(fp,"%s   ",a[0].code);
			 
			 fclose(fp);
			 		int cont=edit_info(code);
			 		printf("%d",cont);
			 	copy_info(code,cont);
				  system("cls");
			goto wapis;
			
			
			break;
		}
		case 2:{
		
			system("cls");
			 p=atoi(a[0].money);
			
			
	ali:		printf("\n\n\n\t\t\tEnter Amount: ");
			scanf("%ld",&am);
			
			if(am>p){
				printf("\n\t\t\tless ammount enter\n");Sleep(900);
				system("cls");
				goto ali;
			}

			p=p-am;		
		// convert 123 to string 
          itoa(p, snum, 10);
			
			
			strcpy(a[0].money,snum);
			 system("cls");
			 fp=fopen(code,"w");
			 
			   fprintf(fp,"%s  ",a[0].fn);
       fprintf(fp,"%s   ",a[0].ln);
       fprintf(fp,"%s   ",a[0].ffn);
       fprintf(fp,"%s   ",a[0].fln);
       fprintf(fp,"%s   ",a[0].dat);
	   fprintf(fp,"%s   ",a[0].add);
	   fprintf(fp,"%s   ",a[0].tel);
       fprintf(fp,"%s   ",a[0].phone);
       fprintf(fp,"%s   ",a[0].cnic);
	   fprintf(fp,"%s   ",a[0].money);
	   fprintf(fp,"%s   ",a[0].code);
			 
			 fclose(fp);
			 		int cont=edit_info(code);
			 		
			 	copy_info(code,cont);
				  system("cls");
			goto wapis;
			
			
			break;
		}
		case 3:{
			system("cls");
				system("cls");
			 p=atoi(a[0].money);
			 
			 char ab[100];
aqrab:			 printf("\n\n\n\t\t\tEnter code\n\t\t\t");
			 scanf("%s",&ab);
			 strcat(ab,".txt");
			 if(strcmp(code,ab)==0){
			 	printf("\n\t\t\tEnter Other Account Code\n");
			 	Sleep(700);
			 	system("cls");
				 goto aqrab;
			 }
			 
			
			
	ali1:		printf("\n\n\n\t\t\tEnter Amount: ");
			scanf("%ld",&am);
			
			if(am>p){
				printf("\n\t\t\tless ammount enter\n");Sleep(900);
				system("cls");
				goto ali1;
			}

			p=p-am;		
		// convert 123 to string
          itoa(p, snum, 10);
			
			
			strcpy(a[0].money,snum);
			 system("cls");
			 fp=fopen(code,"w");
			 
			   fprintf(fp,"%s  ",a[0].fn);
       fprintf(fp,"%s   ",a[0].ln);
       fprintf(fp,"%s   ",a[0].ffn);
       fprintf(fp,"%s   ",a[0].fln);
       fprintf(fp,"%s   ",a[0].dat);
	   fprintf(fp,"%s   ",a[0].add);
	   fprintf(fp,"%s   ",a[0].tel);
       fprintf(fp,"%s   ",a[0].phone);
       fprintf(fp,"%s   ",a[0].cnic);
	   fprintf(fp,"%s   ",a[0].money);
	   fprintf(fp,"%s   ",a[0].code);
			 
			 fclose(fp);
			 		int cont=edit_info(code);
			 		
			 	copy_info(code,cont);
				  system("cls");
				  
				  fp=fopen(ab,"r");
				  i=0;
				   fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
				  
				  fclose(fp);
				  
				  p=atoi(a[0].money);
				  p=p+am;
				  itoa(p, snum, 10);
				  
				  strcpy(a[0].money,snum);
					 fp=fopen(ab,"w");
			 
			   fprintf(fp,"%s  ",a[0].fn);
       fprintf(fp,"%s   ",a[0].ln);
       fprintf(fp,"%s   ",a[0].ffn);
       fprintf(fp,"%s   ",a[0].fln);
       fprintf(fp,"%s   ",a[0].dat);
	   fprintf(fp,"%s   ",a[0].add);
	   fprintf(fp,"%s   ",a[0].tel);
       fprintf(fp,"%s   ",a[0].phone);
       fprintf(fp,"%s   ",a[0].cnic);
	   fprintf(fp,"%s   ",a[0].money);
	   fprintf(fp,"%s   ",a[0].code);
			 
			 fclose(fp);  
				  
					  fp=fopen(code,"r");
				  i=0;
				   fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
				  
				  fclose(fp);
				  
					cont=edit_info(ab);
			 		
			 	copy_info(ab,cont);  
				  
				  
				  system("cls");
				  
				  
			goto wapis;
			
			
			
			break;
		}
		case 4:{
			system("cls");
			main();
			break;
		}
		default:{
			
		
		gotoxy(53,15);
		
		printf("wrong statement");
		Sleep(900);
		system("cls");
		goto wapis;	
break;
}
	}
		
}else{
	system("cls");
	main();
}
		
}
void delet(){
	char code[50];
	FILE *fp;
	struct record a[1000];
	system("cls");
	printf("\n\t\t\tEnter Account Code\n\t\t\t");
	scanf("%s",&code);
	
	fp=fopen("info.txt","r");
	int i=0,j,k;

		while(!feof(fp)){

    fscanf(fp,"%s",&a[i].fn);
       fscanf(fp,"%s",&a[i].ln);
       fscanf(fp,"%s",&a[i].ffn);
       fscanf(fp,"%s",&a[i].fln);
       fscanf(fp,"%s",&a[i].dat);
	   fscanf(fp,"%s",&a[i].add);
	   fscanf(fp,"%s",&a[i].tel);
       fscanf(fp,"%s",&a[i].phone);
       fscanf(fp,"%s",&a[i].cnic);
	   fscanf(fp,"%s",&a[i].money);
	   fscanf(fp,"%s",&a[i].code);
       fscanf(fp,"%s",&a[i].pswrd);
       i++;
	
}
fclose(fp);
i=i-1;

for(j=0;j<i;j++){
	if(strcmp(a[j].code,code)==0){
		i=i-1;
	
		for(k=j;k<i;k++){
			strcpy(a[k].fn,a[k+1].fn);
            strcpy(a[k].ln,a[k+1].ln);
            strcpy(a[k].ffn,a[k+1].ffn);
            strcpy(a[k].fln,a[k+1].fln);
            strcpy(a[k].dat,a[k+1].dat);
            strcpy(a[k].add,a[k+1].add);
            strcpy(a[k].tel,a[k+1].tel);
            strcpy(a[k].phone,a[k+1].phone);
            strcpy(a[k].cnic,a[k+1].cnic);
            strcpy(a[k].money,a[k+1].money);
		    strcpy(a[k].code,a[k+1].code);
            strcpy(a[k].pswrd,a[k+1].pswrd);
		}	
	
	}
}
j=i;
fp=fopen("info.txt","w");
for(i=0;i<j;i++){

    fprintf(fp,"\n%s\t",a[i].fn);
        fprintf(fp,"%s\t",a[i].ln);
        fprintf(fp,"%s\t",a[i].ffn);
        fprintf(fp,"%s\t",a[i].fln);
        fprintf(fp,"%s\t",a[i].dat);
	    fprintf(fp,"%s\t",a[i].add);
	    fprintf(fp,"%s\t",a[i].tel);
        fprintf(fp,"%s\t",a[i].phone);
        fprintf(fp,"%s\t",a[i].cnic);
	    fprintf(fp,"%s\t",a[i].money);
	    fprintf(fp,"%s\t",a[i].code);
        fprintf(fp,"%s\t",a[i].pswrd);


}
fclose(fp);
account_file_delet(code);
 account_delet(code);
strcat(code,".txt");
remove(code);
admin_menu();
}
account_file_delet(char code[]){
	struct account a[1000];
	FILE *fp;
	fp=fopen("passwords.txt","r");
	int i=0,j,k;
	while(!feof(fp)){
		fscanf(fp,"%s",&a[i].id);
		fscanf(fp,"%s",&a[i].pswrd);
		i++;
	}
	fclose(fp);
	
	for(j=0;j<i;j++){
		
		if(strcmp(a[j].id,code)==0){
			i--;
			for(k=j;k<i;k++){
				strcpy(a[k].id,a[k+1].id);
				strcpy(a[k].pswrd,a[k+1].pswrd);
				
				
				
				
			}
		}
	}
	
	fp=fopen("passwords.txt","w");
	for(j=0;j<i;j++){
			
		fprintf(fp,"%s   ",a[j].id);
		fprintf(fp,"%s\n",a[j].pswrd);
	
	}
	fclose(fp);	
}
void  account_delet(char code[]){
	char a[10000][50];
		FILE *fp;
			fp=fopen("account_code.txt","r");
	
	int i=0,j,k;
	while(!feof(fp)){
		fscanf(fp,"%s",&a[i]);
		i++;
	}
	fclose(fp);
	
	for(j=0;j<i;j++){
		if(strcmp(a[j],code)==0){
			i--;
			for(k=j;k<i;k++){
				strcpy(a[k],a[k+1]);
			}
		}
	}
		fp=fopen("account_code.txt","w");
	
	for(j=0;j<i;j++){
		fprintf(fp,"%s\n",a[j]);
	}
	
	fclose(fp);
	printf("\n\t\t\tAccount deleted successfully");
	Sleep(100);
	

	
}

