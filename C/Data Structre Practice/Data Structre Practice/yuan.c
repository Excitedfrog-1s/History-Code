#include "stdio.h" 
#include "stdlib.h" 
#include "string.h"
int shoudsave=0; //
 
//结构体1。
typedef struct student //建立一个结构体
{ 
char num[10];//学号 
char name[20];  //成员组表单
int cgrade; 
int mgrade; 
int egrade; 
int totle; 
int ave; 
char neartime[10]; 
}stu;

//结构体2。
typedef struct node //协助建立结构体
{ 
struct student data; 
struct node *next; 
}Node,*Link;
//结构体3
typedef struct  anode{ 
  struct student key;  //数据域
  struct   anode   *left,*right; //左右孩子
}aNode,*Link2;

//二叉树初始化
aNode *chushishu()
{
	aNode *l;
		l=(aNode*)malloc(sizeof(aNode));
	if(l==NULL) l=NULL;
	else
	{
		l=(aNode*)malloc(sizeof(aNode));
		l->left=NULL;
		l->right=NULL;
	
	};
	return l;
};
//二叉树建立
aNode *shu(Node *L,aNode *K)
{
	Node *l;
	aNode *k;
	k=chushishu();
	l=L;
	if(l==NULL)
	{
	    k->key=l->data;
		k->left=NULL;
		k->right=NULL;
		return k;
	}
	else 
	{
		if(k->key.num>=l->data.num)
			return shu(l,k->left);
		else if(k->key.num<l->data.num)
			return shu(l,k->right);
	};
	return k;
};

//中序遍历
void bianli(aNode *l)
{
	if(l==NULL) return;
	else {
		bianli(l->left);
		printf("学号\t 姓名\t c语言\t 高数\t 英语\n");
	  printf("%s\t %s\t %f\t %f\t %f\t\n",l->key.num[10],l->key.name[20],l->key.cgrade,l->key.mgrade,l->key.egrade);
		bianli(l->right);
	};
};

void menu() //界面
{   
    printf("\t\t       ★  欢迎您使用学生成绩管理系统  ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         1.输入成绩信息        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         2.删除成绩信息        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         3.查询成绩信息        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         4.修改成绩信息        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         5.显示学生成绩        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         6.统计学生成绩        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         7.排序本班成绩        ★\n",4,4);  
    printf("\t\t       ★                               ★\n",4,4);  
    printf("\t\t       ★         8.保存学生信息        ★\n",4,4);    
    printf("\t\t       ★                               ★\n",4,4); 
 printf("\t\t       ★         9.退出管理系统        ★\n",4,4);  
     }
void printstart() //声明代码的用途，当代码出现时，便代替为它的用途
{ 
printf("-----------------------------------------------------------------------\n"); 
} ;
void Cuowu() 
{ 
printf("\n=====>提示:输入错误!\n"); 
}
void Wrong() 
{ 
printf("\n=====>提示:输入错误!\n"); 
};
void Nofind() 
{ 
printf("\n=====>提示:没有找到该学生!\n"); 
};
void printc() // 输出中文 
{ 
printf("学号    姓名            英语成绩 高数成绩 C语言成绩     总分    平均分\n"); 
};
void printe(Node *p)//输出英文 
{ 
printf(" %s\t%s\t\t%d\t  %d\t   %d\t\t%d\t%d\n",p->data.num,p->data.name,p->data.egrade,p->data.mgrade,p->data.cgrade,p->data.totle,p->data.ave); //p->data.均为数据，类型由开始的定义为准
};

//函数。
Node* Locate(Link l,char findmess[],char nameornum[]) //该函数用于定位链表中符合要求的结点，并返回该结点指针 
{ 
Node *r; 
if(strcmp(nameornum,"num")==0) //按学号查询 
{ 
 r=l->next; 
 while(r!=NULL) 
 { 
  if(strcmp(r->data.num,findmess)==0) 
  return r; 
  r=r->next; 
 } 
} 
else if(strcmp(nameornum,"name")==0) //按姓名查询 
{ 
 r=l->next; 
 while(r!=NULL) 
 { 
  if(strcmp(r->data.name,findmess)==0) 
  return r; 
  r=r->next; 
 } 
} 
return 0; 
}

//添加函数。
void Tianjia(Link l) //添加学生信息
{ 
Node *p,*r,*s; 
char num[10]; 
r=l; 
s=l->next; 
while(r->next!=NULL) 
 r=r->next; //将指针置于最末尾 
while(1) 
{ 
 printf("请你输入学号(以'0'返回上一级菜单:)"); 
 scanf("%s",num); 
 if(strcmp(num,"0")==0) 
  break; 
 while(s) 
 { 
  if(strcmp(s->data.num,num)==0) 
  { 
  printf("=====>提示:学号为'%s'的学生已经存在,若要修改请你选择'4 修改'!\n",num); 
  printstart(); 
  printc(); 
  printe(s); 
  printstart(); 
  printf("\n"); 
  return; 
  } 
  s=s->next; 
 } 
  
 p=(Node *)malloc(sizeof(Node)); 
  
 strcpy(p->data.num,num); 
 printf("请你输入姓名(汉字最多三个，字母最多六个）:"); 
 scanf("%s",p->data.name); 
 getchar(); 
 printf("请你输入C语言成绩:"); 
 scanf("%d",&p->data.cgrade); 
 getchar();
loop1: if(p->data.cgrade>100||p->data.cgrade<0)
 {
  Cuowu();
  printf("请你重新输入C语言成绩:"); 
     scanf("%d",&p->data.cgrade);
     goto loop1;
  }
 printf("请你输入高数成绩:"); 
 scanf("%d",&p->data.mgrade); 
 getchar();
loop2: if(p->data.mgrade>100||p->data.mgrade<0)
 {
  Cuowu();
     printf("请你重新输入高数成绩:");
  scanf("%d",&p->data.mgrade);
  goto loop2;
 }
 printf("请你输入英语成绩:"); 
 scanf("%d",&p->data.egrade); 
 getchar(); 
loop3: if(p->data.egrade>100||p->data.egrade<0)
 {
  Cuowu();
     printf("请你重新输入英语成绩:");
  scanf("%d",&p->data.egrade);
  goto loop3;
 }
 p->data.totle=p->data.egrade+p->data.cgrade+p->data.mgrade; 
 p->data.ave=p->data.totle / 3; 
 //信息输入已经完成 
 p->next=NULL; 
 r->next=p; 
 r=p; 
 shoudsave=1; 
} 
}

//查询函数
void Chaxun(Link l) //查询学生 
{ 
int sel; 
char findmess[20]; 
Node *p;
  if(!l->next) 
{ 
 printf("\n=====>提示:没有资料可以查询!\n"); 
 return; 
} 
printf("\n=====>1按学号查找\n=====>2按姓名查找\n"); 
scanf("%d",&sel); 
if(sel==1)//学号 
{ 
 printf("请你输入要查找的学号:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"num"); 
 if(p) 
 { 
  printf("\t\t\t\t查找结果\n"); 
  printstart(); 
  printc(); 
  printe(p); 
  printstart(); 
 } 
 else 
  Nofind(); 
} 
else if(sel==2) //姓名 
{ 
 printf("请你输入要查找的姓名:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"name"); 
 if(p) 
 { 
  printf("\t\t\t\t查找结果\n"); 
  printstart(); 
  printc(); 
  printe(p); 
  printstart(); 
 } 
 else 
 Nofind(); 
} 
else 
 Wrong(); 
  }

//删除函数
void Shanchu(Link l) //删除 
{ 
int sel; 
Node *p,*r; 
char findmess[20]; 
if(!l->next) 
{ 
 printf("\n=====>提示:没有资料可以删除!\n"); 
 return; 
} 
printf("\n=====>1按学号删除\n=====>2按姓名删除\n"); 
scanf("%d",&sel); 
if(sel==1) 
{ 
 printf("请你输入要删除的学号:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"num"); 
 if(p) 
 { 
  r=l; 
  while(r->next!=p) 
  r=r->next; 
  r->next=p->next; 
  free(p); 
  printf("\n=====>提示:该学生已经成功删除!\n"); 
  shoudsave=1; 
 } 
 else 
  Nofind(); 
} 
else if(sel==2) 
{ 
 printf("请你输入要删除的姓名:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"name"); 
 if(p) 
 { 
  r=l; 
  while(r->next!=p) 
  r=r->next; 
  r->next=p->next; 
  free(p); 
  printf("\n=====>提示:该学生已经成功删除!\n"); 
  shoudsave=1; 
 } 
 else 
  Nofind(); 
} 
else 
 Wrong(); 
}

//修改函数
void Xiugai(Link l) 
{ 
Node *p; 
char findmess[20]; 
if(!l->next) 
{ 
 printf("\n=====>提示:没有资料可以修改!\n"); 
 return; 
} 
printf("请你输入要修改的学生学号:"); 
scanf("%s",findmess); 
p=Locate(l,findmess,"num"); 
if(p) 
{ 
printf("请你输入新学号(原来是%s):",p->data.num); 
 scanf("%s",p->data.num); 
printf("请你输入新姓名(原来是%s):",p->data.name); 
 scanf("%s",p->data.name); 
 getchar();  
 printf("请你输入新的C语言成绩(原来是%d分):",p->data.cgrade); 
 scanf("%d",&p->data.cgrade); 
 loop1: if(p->data.cgrade>100||p->data.cgrade<0)
 {
  Wrong();
  printf("请你重新输入C语言成绩:"); 
     scanf("%d",&p->data.cgrade);
     goto loop1;
  }
 getchar(); 
 printf("请你输入新的高数成绩(原来是%d分):",p->data.mgrade); 
 scanf("%d",&p->data.mgrade); 
 loop2: if(p->data.mgrade>100||p->data.mgrade<0)
 {
  Wrong();
     printf("请你重新输入高数成绩:");
  scanf("%d",&p->data.mgrade);
  goto loop2;
 }
 getchar(); 
 printf("请你输入新的英语成绩(原来是%d分):",p->data.egrade); 
 scanf("%d",&p->data.egrade); 
 loop3: if(p->data.egrade>100||p->data.egrade<0)
 {
  Wrong();
     printf("请你重新输入英语成绩:");
  scanf("%d",&p->data.egrade);
  goto loop3;
 }
 p->data.totle=p->data.egrade+p->data.cgrade+p->data.mgrade; 
 p->data.ave=p->data.totle/3; 
 printf("\n=====>提示:资料修改成功!\n"); 
 shoudsave=1; 
} 
else 
 Nofind();
}

//统计函数
void Tongji(Link l) 
{ 
Node *pm,*pe,*pc,*pt,*pa; //用于指向分数最高的接点 
Node *r=l->next; 
if(!r) 
{ 
 printf("\n=====>提示:没有资料可以统计!\n"); 
 return ; 
} 
pm=pe=pc=pt=pa=r; 
while(r!=NULL) 
{ 
 if(r->data.cgrade>=pc->data.cgrade) 
  pc=r; 
 if(r->data.mgrade>=pm->data.mgrade) 
  pm=r; 
 if(r->data.egrade>=pe->data.egrade) 
  pe=r; 
 if(r->data.totle>=pt->data.totle) 
  pt=r; 
 if(r->data.ave>=pa->data.ave) 
  pa=r; 
r=r->next; 
} 
printf("------------------------------统计结果--------------------------------\n"); 
printf("总分最高者:\t%s %d分\n",pt->data.name,pt->data.totle); 
printf("平均分最高者:\t%s %d分\n",pa->data.name,pa->data.ave);
  printf("英语最高者:\t%s %d分\n",pe->data.name,pe->data.egrade); 
printf("高数最高者:\t%s %d分\n",pm->data.name,pm->data.mgrade); 
printf("C语言最高者:\t%s %d分\n",pc->data.name,pc->data.cgrade); 
  printstart(); 
}

//显示函数
void Xianshi(Link l) 
{ 
int count=0; 
Node *p; 
p=l->next;
if(!p) 
{ 
 printf("\n=====>提示:没有资料可以显示!\n"); 
 return; 
} 
printf("\t\t\t\t显示结果\n"); 
printstart(); 
printc(); 
printf("\n"); 
while(p) 
{ 
 printe(p); 
 p=p->next; 
} 
printstart(); 
printf("\n"); 
}

//排序函数
void Paixu(Link l) 
{ 
aNode *k;
Node *j;
k=chushishu();
j=l->next;
k->key=j->data;
while(j!=0)
	{
     k=shu(j,k);
     j=j->next;
	}
   bianli(k);
printf("\n=====>提示:排序已经完成，请按5查询......\n");  
printf("\n");
};

//报错函数
void Baocun(Link l) 
{ 
FILE* fp; 
Node *p; 
int flag=1,count=0; 
fp=fopen("c:\\student","wb"); 
if(fp==NULL) 
{ 
 printf("\n=====>提示:重新打开文件时发生错误!\n"); 
 exit(1); 
} 
p=l->next;
while(p) 
{ 
 if(fwrite(p,sizeof(Node),1,fp)==1) 
 {  
  p=p->next; 
  count++; 
 } 
 else 
 { 
  flag=0; 
  break; 
 } 
} 
if(flag) 
{ 
 printf("\n=====>提示:文件保存成功.(有%d条记录已经保存.)\n",count); 
 shoudsave=0; 
} 
fclose(fp); 
}

//主函数
void main() 
{ 
Link l;//定义链表 
FILE *fp; //文件的指针
int sel; 
char ch; 
char jian;
int count=0; 
Node *p,*r; 
printf("\t\t\t\t学生成绩管理系统\n\t\t\t\t计算机系网工二班  组员：李矛 马懿新 王茂霖 徐亮\n"); 
l=(Node*)malloc(sizeof(Node)); 
l->next=NULL; 
r=l;
fp=fopen("C:\\student","rb"); 
if(fp==NULL) 
{ 
 printf("\n=====>提示:文件还不存在，是否创建？(y/n)\n"); 
 scanf("%c",&jian); 
 if(jian=='y'||jian=='Y') 
 fp=fopen("C:\\student","wb"); 
 else 
 exit(0); 
} 
printf("\n=====>提示:文件已经打开,正在导入记录......\n");
while(!feof(fp)) 
{ 
 p=(Node*)malloc(sizeof(Node)); 
 if(fread(p,sizeof(Node),1,fp)) //将文件的内容放入接点中 
 { 
  p->next=NULL; 
  r->next=p; 
  r=p; //将该接点挂入连中 
  count++; 
 } 
}
fclose(fp); //关闭文件 
printf("\n=====>提示:记录导入完毕,共导入%d条记录.\n",count);
while(1) 
{ 
 menu(); 
 printf("请你选择操作:"); 
 scanf("%d",&sel);
 if(sel==9) 
 { 
  if(shoudsave==1) 
  { getchar(); 
  printf("\n=====>提示:资料已经改动,是否将改动保存到文件中(y/n)?\n"); 
  scanf("%c",&ch); 
  if(ch=='y'||ch=='Y') 
   Baocun(l); 
  } 
  printf("\n=====>提示:你已经退出系统,再见!\n"); 
  break; 
 } 
 switch(sel) 
 { 
 case 1:Tianjia(l);break; //增加学生 
 case 2:Shanchu(l);break;//删除学生 
 case 3:Chaxun(l);break;//查询学生 
 case 4:Xiugai(l);break;//修改学生 
 case 5:Xianshi(l);break;//显示学生 
 case 6:Tongji(l);break;//统计学生 
 case 7:Paixu(l);break;//排序学生 
 case 8:Baocun(l);break;//保存学生 
 default: Cuowu();getchar();break; 
 } 
} 
} 
//