#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
int shoudsave=0; // 
struct student //�����ṹ��
{ 
char num[10];//ѧ�� 
char name[20];  //��Ա���б�
int cgrade; 
int mgrade; 
int egrade; 
int totle; 
int ave; 
char neartime[10];//�������ʱ�� 
};
typedef struct node //����struct�ṹ������������Ը��򵥵ı�ʾ�ṹ�����
{ 
struct student data; 
struct node *next; 
}Node,*Link;
void menu() //������ʼ���棬������������
{   printf("\t\t       %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);  
    printf("\t\t       %c   ��ӭ��ʹ��ѧ���ɼ�����ϵͳ  %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         1.����ѧ������        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         2.ɾ��ѧ������        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         3.��ѯѧ������        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         4.�޸�ѧ���ɼ�        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         5.��ʾѧ���ɼ�        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         6.ͳ��ѧ���ɼ�        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         7.���򱾰�ɼ�        %c\n",4,4);  
    printf("\t\t       %c                               %c\n",4,4);  
    printf("\t\t       %c         8.����ѧ������        %c\n",4,4);    
    printf("\t\t       %c                               %c\n",4,4); 
 printf("\t\t       %c         9.�˳�����ϵͳ        %c\n",4,4);  
    printf("\t\t       %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n\n",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);  
     }
void printstart() //������Щ�������;�����������ʱ�������Ϊ������;
{ 
printf("-----------------------------------------------------------------------\n"); 
} 
void Wrong() 
{ 
printf("\n=====>��ʾ:�������!\n"); 
}
void Nofind() 
{ 
printf("\n=====>��ʾ:û���ҵ���ѧ��!\n"); 
}
void printc() // ����������������� 
{ 
printf("ѧ��    ����            Ӣ��ɼ� ��ѧ�ɼ� ���ĳɼ�     �ܷ�    ƽ����\n"); 
}
void printe(Node *p)//�������������Ӣ�� 
{ 
printf(" %s\t%s\t\t%d\t  %d\t   %d\t\t%d\t%d\n",p->data.num,p->data.name,p->data.egrade,p->data.mgrade,p->data.cgrade,p->data.totle,p->data.ave); //p->data.��Ϊ���ݣ������ɿ�ʼ�Ķ���Ϊ׼
}
Node* Locate(Link l,char findmess[],char nameornum[]) //�ú������ڶ�λ�����з���Ҫ��Ľӵ㣬�����ظ�ָ�� 
{ 
Node *r; 
if(strcmp(nameornum,"num")==0) //��ѧ�Ų�ѯ 
{ 
 r=l->next; 
 while(r!=NULL) 
 { 
  if(strcmp(r->data.num,findmess)==0) 
  return r; 
  r=r->next; 
 } 
} 
else if(strcmp(nameornum,"name")==0) //��������ѯ 
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
void Add(Link l) //����ѧ�� 
{ 
Node *p,*r,*s; 
char num[10]; 
r=l; 
s=l->next; 
while(r->next!=NULL) 
 r=r->next; //��ָ��������ĩβ 
while(1) 
{ 
 printf("��������ѧ��(��'0'������һ���˵�:)"); 
 scanf("%s",num); 
 if(strcmp(num,"0")==0) 
  break; 
 while(s) 
 { 
  if(strcmp(s->data.num,num)==0) 
  { 
  printf("=====>��ʾ:ѧ��Ϊ'%s'��ѧ���Ѿ�����,��Ҫ�޸�����ѡ��'4 �޸�'!\n",num); 
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
 printf("������������(���������������ĸ���������:"); 
 scanf("%s",p->data.name); 
 getchar(); 
 printf("�����������ĳɼ�:"); 
 scanf("%d",&p->data.cgrade); 
 getchar();
loop1: if(p->data.cgrade>100||p->data.cgrade<0)
 {
  Wrong();
  printf("���������������ĳɼ�:"); 
     scanf("%d",&p->data.cgrade);
     goto loop1;
  }
 printf("����������ѧ�ɼ�:"); 
 scanf("%d",&p->data.mgrade); 
 getchar();
loop2: if(p->data.mgrade>100||p->data.mgrade<0)
 {
  Wrong();
     printf("��������������ѧ�ɼ�:");
  scanf("%d",&p->data.mgrade);
  goto loop2;
 }
 printf("��������Ӣ��ɼ�:"); 
 scanf("%d",&p->data.egrade); 
 getchar(); 
loop3: if(p->data.egrade>100||p->data.egrade<0)
 {
  Wrong();
     printf("������������Ӣ��ɼ�:");
  scanf("%d",&p->data.egrade);
  goto loop3;
 }
 p->data.totle=p->data.egrade+p->data.cgrade+p->data.mgrade; 
 p->data.ave=p->data.totle / 3; 
 //��Ϣ�����Ѿ���� 
 p->next=NULL; 
 r->next=p; 
 r=p; 
 shoudsave=1; 
  
} 
}
void Qur(Link l) //��ѯѧ�� 
{ 
int sel; 
char findmess[20]; 
Node *p;
  if(!l->next) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ��Բ�ѯ!\n"); 
 return; 
} 
printf("\n=====>1��ѧ�Ų���\n=====>2����������\n"); 
scanf("%d",&sel); 
if(sel==1)//ѧ�� 
{ 
 printf("��������Ҫ���ҵ�ѧ��:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"num"); 
 if(p) 
 { 
  printf("\t\t\t\t���ҽ��\n"); 
  printstart(); 
  printc(); 
  printe(p); 
  printstart(); 
 } 
 else 
  Nofind(); 
} 
else if(sel==2) //���� 
{ 
 printf("��������Ҫ���ҵ�����:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"name"); 
 if(p) 
 { 
  printf("\t\t\t\t���ҽ��\n"); 
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
void Del(Link l) //ɾ�� 
{ 
int sel; 
Node *p,*r; 
char findmess[20]; 
if(!l->next) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ���ɾ��!\n"); 
 return; 
} 
printf("\n=====>1��ѧ��ɾ��\n=====>2������ɾ��\n"); 
scanf("%d",&sel); 
if(sel==1) 
{ 
 printf("��������Ҫɾ����ѧ��:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"num"); 
 if(p) 
 { 
  r=l; 
  while(r->next!=p) 
  r=r->next; 
  r->next=p->next; 
  free(p); 
  printf("\n=====>��ʾ:��ѧ���Ѿ��ɹ�ɾ��!\n"); 
  shoudsave=1; 
 } 
 else 
  Nofind(); 
} 
else if(sel==2) 
{ 
 printf("��������Ҫɾ��������:"); 
 scanf("%s",findmess); 
 p=Locate(l,findmess,"name"); 
 if(p) 
 { 
  r=l; 
  while(r->next!=p) 
  r=r->next; 
  r->next=p->next; 
  free(p); 
  printf("\n=====>��ʾ:��ѧ���Ѿ��ɹ�ɾ��!\n"); 
  shoudsave=1; 
 } 
 else 
  Nofind(); 
} 
else 
 Wrong(); 
}
void Modify(Link l) 
{ 
Node *p; 
char findmess[20]; 
if(!l->next) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ����޸�!\n"); 
 return; 
} 
printf("��������Ҫ�޸ĵ�ѧ��ѧ��:"); 
scanf("%s",findmess); 
p=Locate(l,findmess,"num"); 
if(p) 
{ 
printf("����������ѧ��(ԭ����%s):",p->data.num); 
 scanf("%s",p->data.num); 
printf("��������������(ԭ����%s):",p->data.name); 
 scanf("%s",p->data.name); 
 getchar();  
 printf("���������µ����ĳɼ�(ԭ����%d��):",p->data.cgrade); 
 scanf("%d",&p->data.cgrade); 
 loop1: if(p->data.cgrade>100||p->data.cgrade<0)
 {
  Wrong();
  printf("���������������ĳɼ�:"); 
     scanf("%d",&p->data.cgrade);
     goto loop1;
  }
 getchar(); 
 printf("���������µ���ѧ�ɼ�(ԭ����%d��):",p->data.mgrade); 
 scanf("%d",&p->data.mgrade); 
 loop2: if(p->data.mgrade>100||p->data.mgrade<0)
 {
  Wrong();
     printf("��������������ѧ�ɼ�:");
  scanf("%d",&p->data.mgrade);
  goto loop2;
 }
 getchar(); 
 printf("���������µ�Ӣ��ɼ�(ԭ����%d��):",p->data.egrade); 
 scanf("%d",&p->data.egrade); 
 loop3: if(p->data.egrade>100||p->data.egrade<0)
 {
  Wrong();
     printf("������������Ӣ��ɼ�:");
  scanf("%d",&p->data.egrade);
  goto loop3;
 }
 p->data.totle=p->data.egrade+p->data.cgrade+p->data.mgrade; 
 p->data.ave=p->data.totle/3; 
 printf("\n=====>��ʾ:�����޸ĳɹ�!\n"); 
 shoudsave=1; 
} 
else 
 Nofind();
}
void Disp(Link l) 
{ 
int count=0; 
Node *p; 
p=l->next;
if(!p) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ�����ʾ!\n"); 
 return; 
} 
printf("\t\t\t\t��ʾ���\n"); 
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
void Tongji(Link l) 
{ 
Node *pm,*pe,*pc,*pt,*pa; //����ָ�������ߵĽӵ� 
Node *r=l->next; 
if(!r) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ���ͳ��!\n"); 
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
printf("------------------------------ͳ�ƽ��--------------------------------\n"); 
printf("�ܷ������:\t%s %d��\n",pt->data.name,pt->data.totle); 
printf("ƽ���������:\t%s %d��\n",pa->data.name,pa->data.ave);
  printf("Ӣ�������:\t%s %d��\n",pe->data.name,pe->data.egrade); 
printf("��ѧ�����:\t%s %d��\n",pm->data.name,pm->data.mgrade); 
printf("���������:\t%s %d��\n",pc->data.name,pc->data.cgrade); 
  printstart(); 
}
void Sort(Link l) 
{ 
Link ll; 
Node *p,*rr,*s;
ll=(Link)malloc(sizeof(Node)); //�������µ����� 
ll->next=NULL;
if(l->next==NULL) 
{ 
 printf("\n=====>��ʾ:û�����Ͽ�������!\n"); 
 return ; 
} 
p=l->next; 
while(p) 
{ 
 s=(Node*)malloc(sizeof(Node)); //�½��ӵ����ڱ�����Ϣ 
 s->data=p->data; 
 s->next=NULL;
 rr=ll; 
 while(rr->next!=NULL && rr->next->data.totle>=p->data.totle) 
  rr=rr->next; 
 if(rr->next==NULL) 
  rr->next=s; 
 else 
 { 
  s->next=rr->next; 
  rr->next=s; 
 } 
 p=p->next; 
} 
free(l); 
l->next=ll->next; 
printf("\n=====>��ʾ:�����Ѿ���ɣ��밴5��ѯ......\n");  
printf("\n");
}
void Save(Link l) 
{ 
FILE* fp; 
Node *p; 
int flag=1,count=0; 
fp=fopen("c:\\student","wb"); 
if(fp==NULL) 
{ 
 printf("\n=====>��ʾ:���´��ļ�ʱ��������!\n"); 
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
 printf("\n=====>��ʾ:�ļ�����ɹ�.(��%d����¼�Ѿ�����.)\n",count); 
 shoudsave=0; 
} 
fclose(fp); 
}
void main() 
{ 
Link l;//���� 
FILE *fp; //�ļ�ָ�� 
int sel; 
char ch; 
char jian;
int count=0; 
Node *p,*r; 
printf("\t\t\t\tѧ���ɼ�����ϵͳ\n\t\t\t\t\n");
printf("\t-------������������ࣨС���Ա�������������������ة����������\t\t\t\t\n");
l=(Node*)malloc(sizeof(Node)); 
l->next=NULL; 
r=l;
fp=fopen("C:\\student","rb"); 
if(fp==NULL) 
{ 
 printf("\n=====>��ʾ:�ļ��������ڣ��Ƿ񴴽���(y/n)\n"); 
 scanf("%c",&jian); 
 if(jian=='y'||jian=='Y') 
 fp=fopen("C:\\student","wb"); 
 else 
 exit(0); 
} 
printf("\n=====>��ʾ:�ļ��Ѿ���,���ڵ����¼......\n");
while(!feof(fp)) 
{ 
 p=(Node*)malloc(sizeof(Node)); 
 if(fread(p,sizeof(Node),1,fp)) //���ļ������ݷ���ӵ��� 
 { 
  p->next=NULL; 
  r->next=p; 
  r=p; //���ýӵ�������� 
  count++; 
 } 
}
fclose(fp); //�ر��ļ� 
printf("\n=====>��ʾ:��¼�������,������%d����¼.\n",count);
while(1) 
{ 
 menu(); 
 printf("����ѡ�����:"); 
 scanf("%d",&sel);
 if(sel==9) 
 { 
  if(shoudsave==1) 
  { getchar(); 
  printf("\n=====>��ʾ:�����Ѿ��Ķ�,�Ƿ񽫸Ķ����浽�ļ���(y/n)?\n"); 
  scanf("%c",&ch); 
  if(ch=='y'||ch=='Y') 
   Save(l); 
  } 
  printf("\n=====>��ʾ:���Ѿ��˳�ϵͳ,�ټ�!\n"); 
  break; 
 } 
 switch(sel) 
 { 
 case 1:Add(l);break; //����ѧ�� 
 case 2:Del(l);break;//ɾ��ѧ�� 
 case 3:Qur(l);break;//��ѯѧ�� 
 case 4:Modify(l);break;//�޸�ѧ�� 
 case 5:Disp(l);break;//��ʾѧ�� 
 case 6:Tongji(l);break;//ͳ��ѧ�� 
 case 7:Sort(l);break;//����ѧ�� 
 case 8:Save(l);break;//����ѧ�� 
 default: Wrong();getchar();break; 
 } 
} 
} 
//