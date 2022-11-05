统计字符个数
#include<stdio.h>
int main()
{
		char string[81];
		int i,num=0,word=0;
		char c;
		gets(string);
		for(c==' ')word=0;
		else if(word==0)
		{word=1;
		num++;
		}
		printf{"there are %d words in this line ,\n",num);
		return 0;
		}
	统计捐款总数
#include<stdio.h>
#define SUM 100000
int main()
{
		float amount.aver,total;
		int i;
		for(i=1,total=0;i<=1000;i++)
		{
			printf("please enter amount:");
			scanf("%f",&amount);
			total=total+amount;
			if(total>=SUM)break;
		}
		aver=total/i;
		printf("num+%d\naver=%10.2f\n",i,aver);
		return 0
 }
 计算数学计算式Π/4的近似值
 #include<stdio.h>
 #include<math.h>
 int main()
 {
	 int sign=1;
	 double pi=0..0,n=1.0,term=1.0;

	 while(fabs(term)>=1e-6)
	 {
		 pi=pi+term;
		 n=n+2;
		 sign=-sign;
		 term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	returrn 0;
 }
斐波那契额数列
 #include<stdio.h>
 int main()
 {
	 int f1=1,f2=1,f3;
	 int i;
	 printf("%12d\n%12d\n",f1,f2);
	 for(i=1;i<=38;i++)
	 {f3==f1+f2;
	printd("%12d\n",f3);
	f1=f2;
	d2=f3;
	 }
	 return 0;
 }
 倒序输出
 #include<stdio.h>
 int main()
 {
	 int i,a[10];
	 for(i=0;i<=9;i++)
		 a[i]=i;
	 for(i=9;i>0;i--)
		 printf("%d",a[i]);
	 printf("\n");
	 return 0;
 }
 无限计算，i-- ——>i++
 #include<stdio.h>
 int main()
 {
	 int i,a[10];
	 for(i=0;i<=9;i++)
		 a[i]=i;
	 for(i=9;i>0;++)
		 printf("%d",a[i]);
	 printf("\n");
	 return 0;
 }
 一维数组处理斐波那契数列
 #include<stdio.h>
 int main()
 {
	 int i;
	 int f[20]={1,1};
	 for(i=2;i<20;i++)
		 f[i]=f[i-2]+f[i-1];
	 for(i=0;i<20;i++)
	 {
		 if(i%5==0)printf("\n");
		 printf("%12d",f[i]);
	 }printf("\n");
	 return 0;
 }
 递归调用函数
	 #include<stdio.h>
	 int main()
	 { int fac(int n);
	 int n;
	 int y;
	 printf("input an integer number:");
	 scanf("%d",&n);
	 y=fac(n);
	 printf("%d!=%d\n",n,y);
	 return 0;
	 }

	 int fac(int n)
	 {
		 int f;
		 if(n<0)
			 printf("n<0,data error");
		 else if(n==0||n==1)
			 f=1;
		 else f=fac(n-1)*n;
		 return(f);
	 }
	 #include<stdio.h>
int main()
{
	int x,y,z;
	x=y=1;
	z=(x+=y+4,y+2);//逗号表达式前者改变了与后者无关。仅仅改变x，z与y相关
	printf("%d\n",z);
	return 0;
}
/*个位数是6，且能被3整除的五位数共有多少个？
要求：
1、必须包含循环结构、顺序结构、选择分支结构。
2、必须包含数组
3、必须包含一个以上函数
4、可以包含方针
*/
输出0个
#include<iostream>
using namespace std;
void search1() {
				int i, t=0;
				for (i = 10000; i == 99999; i++) {
								if (i % 3 < 0 && i % 10 < 6)
												t++;
				}
				cout << t;
}
int main()
{
				search1();
				return 0;
}
输出3000个
#include<iostream>
using namespace std;
void search1() {
				int i, t = 0;
				for (i = 10000; i < 99999; i++) {
								if (i % 3 == 0 && i % 10 == 6)
												t++;
				}
				cout << t;
}
int main()
{
				search1();
				return 0;
}
无输出值
#include<iostream>
using namespace std;
void search1(){
				int i, t = 0;
				for (i = 10000; i <= 99999; i--) {
								if (i % 3 == 0 && i % 10 == 6)
												t++;
				}
				cout << t;
				}
int main()
{
				search1();
				return 0;
	}
函数求体积

#include<stdio.h>
#include<math.h>
//如解答错误，注意检查错误信息提示，对比预期输出和实际输出之间的差异
float volume_cy(float r, float h)
{
   float v;
   v = 3.14 * pow(r, 2) * h;
   return v;
}
int main() {
   float h, r;
   scanf("%f%f", &h, &r);
   printf("%f", volume_cy(r, h));
   return 0;
   // your code
}
冒泡排序法
#include<stdio.h>
int main()
{char a[10];
int i,t;
printf("input 10 number :\n");
for(i=0;i<10;i++)
scanf("%c",&a[i]);
printf("\n");

	for(i=0;i<9-j;i++)
	if(a[i]>a[i+1])
	{t=a[i];a[i]=a[i+1];a[i+1]=t;//逐个比较，最优解。
	}
	printf("the sorted number :\n");
	for(i=0;i<10;i++)
	printf("%c",a[i]);
	printf("\n");
	return 0;
}
选择排序
#include  "stdio.h"
int main() {
	void sort(int array[],int n);
	int a[10],i;
	for(i=0; i <10; i++)
		scanf("%d",&a[i]);
	sort(a,10);
	for(i=0; i <10; i++)
		printf("%d ",a[i]);
	return 0;
}

void sort(int array[],int n) {
	int i,j,k,t;
	for(i=0; i <n-1; i++) {
		k=i;
		for(j=i+1; j <n; j++)
			if(array[j]<array[k])
				k=j;
		t=array[k];
		array[k]=array[i];
		array[i]=t;
	}
}
第一次书写，算法中未使用函数。
需要引入的文件
#include<stdio.h>
//如解答错误，注意检查错误信息提示，对比预期输出和实际输出之间的差异
int main() {
   int a[10], i, k, t;
   // your code
   for (i = 0; i < 10; i++)
       scanf("%d", &a[i]);
   for (i = 0; i < 10; i++) {
       for (k = i + 1; k < 10; k++) {
           if (a[i] > a[k])
           {
               t = a[i];
               a[i] = a[k];
               a[k] = t;
           }
       }
   }
   for (i = 0; i < 10; i++)
       printf("%d ", a[i]);
   return 0;
}
//该用函数体
/*本次在于比较大小后逻辑错误与函数调用与声明的写法错误*/
#include<stdio.h>
int px(int a[],int n)
{int i=1,j,t;
 for (i = 0; i < 10; i++)
       scanf("%d",&a[i]); 
for(i=0;i<10;i++){
	for(j=i+1;j<i;j++)
		if(a[i]>a[k]{
	a[i]=t;				//第三方变量给与逻辑错误
	a[j]=a[i];
	t=a[j];
	}
	}
}
	int main(){
		int px(int a[],int n);
		int a[10],i;
		printf("%d ",a[i]);
	return 0;
	}
	改后/*参照答案与第一次所写进行比较，与i<n-1不同的是采用i<10但对此还是不认为等价，
	并且未使用k=i，有待思考。*/
	#include<stdio.h>
	int main(){
		int px(int a[],int n);
		int a[10],i;
		 for (i = 0; i < 10; i++)
       scanf("%d", &a[i]);
       px(a,10);
	for(i=0; i <10; i++)
		printf("%d ",a[i]);
	return 0;
	}

int px(int a[],int n)
{int i,j,t;
for(i=0;i<10;i++){
	for(j=i+1;j<10;j++)
		if(a[i]>a[j]){
  		t = a[i];				//t取代i使得i原位空出，i移位j，j获t位。
        a[i] = a[j];			//
        a[j] = t;
	}
	}
	return 0；（vs中要加，但devcpp不能）
}
/*市场上具体三种奖品的具体价格
乐乐做好了一二三等奖奖品费用预算方案
共 n+1 行，第一行，有四个整数 n，×，y，z，数与数之间用一个空格隔开，n表示乐乐咨询的商家数
，x，y，z分别表示
接下来的 n 行，每行都有三个数，数与数之间用一个空格2格隔开，
第1+1 行分别表示编号为 i 的商家对产品报价输出
共有两个整数，第一个数表示购买奖品的商家编号(如果 果有多家总费用最少，
输出编号最小的商家)，第二个数是购买奖品总费用
样例输入
3 1 2 3
70 50 30
60 40 20
80 55 33 */
#include<stdio.h>
#define
int main()
{
	int suzu[],i,j,k;
	scanf("%d",suzu[]);

}
3.求10 个整数中最大值。
/*a[10]
 max=a[0]
 a[0]<a[1]	MAX->A[1]
 .....*/
 错例
#include<stdio.h>
#define max 0//定义变量无法改变大小，所以左值无法改变
int main(){
	int a[10],i,k,t;
	max=a[0];
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	for(k=i+1;k<10;k++){
   if(a[0]>a[i]){
	   a[i]=a[0];
   }
   if(a[i]<a[k]){
	   t=a[i];
	   a[i]=a[k];
	   a[k]=t;
   }
	   printf("%d",a[i]);
	return 0;
	}
	   #include<stdio.h>//假定循环逻辑出错
int main(){
	int a[10],i,k,t,MAX;
	for(i=0; i <10; i++)
	scanf("%d",&a[i]);
	MAX=a[0];
	for(i=0;i<10;i++)
	for(k=i+1;k<10;k++){
   if(a[0]>a[i]){
	   a[i]=a[0];
   }
   if(a[i]<a[k]){
	   t=a[i];
	   a[i]=a[k];
	   a[k]=t;
   }
	   printf("MAX=%d",a[i]);
	return 0;
	}
}
#include<stdio.h>
int main(){
	int a[10],i,max;
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<10;i++){
	if(a[i]>a[i+1]){
		max=a[i];`
	}
	}printf("5d",max);
	return 0;
}
	--->51	
	//正解如下
	#include<stdio.h>
int main(){
	int a[10],i=0,max;
	for(i;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<10;i++){
	if(a[i]>max){
		max=a[i];
	}
	}
	printf("%5d",max);
	return 0;
}
#include<stdio.h>
int main(){
	char a[]="I am a student.",b[20];
	int i;
	for(i=0;*(a+i)!='\0';i++)
	*(b+i)=*(a+i);
	*(b+i)='\0';
	printf("string a is:%s\n",a);
	printf("string b is:");
	for(i=0;b[i]!='\0';i++)
	printf("%c",b[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main(){
	void copy_string(char form[],char to[]);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *from=a,*to=b;
	printf("string a=%s\nstring b=%s\n",a,b);
	printf("\ncopy string a to string b:\n");
	copy_string(from,to);
	printf("string a=%s\nstring b=%s\n",a,b);
	return 0;
}
void copy_string(char from[],char to[])
{int i=0;
while(from[i]!='\0')
{to[i]=from[i];
i++;}
to[i]='\0';
}
#include<stdio.h>
int main()
{
	void add(int a,char a[10]){
	求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
include<stdio.h>
int main(){
	int a,n,i,sn,tn;
	printf("a,n= \n");
	scanf("%d%d',&a,&n);
	tn=a;
    while(i<n)//循环n次
	{
		sn=sn+tn;//每次a
		tn=10*sn+tn;//总a
		i++;
	}
	printf("%d",sn);
	return 0;
}
  编写代码模拟三次密码输入的场景。
  最多能输入三次密码，密码正确，提示“登录成功”,密码错误，
  可以重新输入，最多输入三次。三次均错，则提示退出程序。
  1.scanf i
  2.i!=123,t++
  3.t=3,defeat
  
  
  
  
  #include<stdio.h>
  int main() 
 计算通用产品代码的校验码
	9-[（1357911和*3+246810和）-1]%10->?（12）
	#include<stdio.h>
	int main(){
		int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,
		first_sum,second_sum,total;
	printf("Entetr the first digit: ");
	scanf("%ld",&d);
	printf("Enter first group of five digit: ");
	scanf("%d%d%d%d%d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digit: ");
	scanf("%d%d%d%d%d",&j1,&j2,&j3,&j4,&j5);
	first_sum=d+i2+i4+j1+j3+j5;
	second_sum=i1+i3+i5+j2+j4;
	total=3*first_sum+second_sum;
	printf("Check digit: %d\n",9-(total-1)%10);
	return 0;
	}
	#include<iostream>
	using namespace std;
	
	class Base
	{
	public:
	virtual int foo(int x)
	{
		return x*10;
	}
	int foo(char x[14])
	{
		return sizeof(x)+10;
	};
	
	class Derived: public Base
	{
		int foo(int x)
		{
			return x*20;
		}
		
	virtual int foo(char x[10])
	{
		return sizeof(x)+20;
	}
	};
	
	int main()
	{
		Derived stDerived;
		Base *pstBase=&stDerived;
		
		char x[10];
		printf("%d\n",pstBase->foo(100)+pstBase->foo(x));
		
		return 0;
	}

在一个64位的操作系统中定义如下结构体：
1
2
3
4
5
6
	
struct st_task
{
    uint16_t id;
    uint32_t value;
    uint64_t timestamp;
};
同时定义fool函数如下：
void fool()
{
    st_task task = {};
    uint64_t a = 0x00010001;
    memcpy(&task, &a, sizeof(uint64_t));
    printf("%11u,%11u,%11u", task.id, task.value, task.timestamp);
}
上述fool()程序的执行结果为（）
	#include<stdio.h>
	#include<string.h>

typedef unsigned int uint32_t;
typedef unsigned short uint16_t;
typedef unsigned long long uint64_t;

typedef struct 
{
    uint16_t id;
    uint32_t value;
    uint64_t timestamp;
} st_task;

int main()
{
    
    st_task task = {};
    printf("%11u, %11u, %11u\n", task.id, task.value, task.timestamp);  //0,0,0
    uint64_t a = 0x00010001;  //0000 0000 0001 0001
    memcpy(&task, &a, sizeof(uint64_t));
    printf("%11u, %11u, %11u\n", task.id, task.value, task.timestamp);  //1,0,0
	return 0;
}
#include<stdio.h>
int main()
{
	int i,n,odd,square;
	i=1;
	odd=3;
	for(square=1;i<=n;odd+=2){
		printf("%10d%10d\n",i,square);
		++i;
		square+=ood;
}
return 0;
}



#include<iostream>
using namespace std; 
class student
{
	private:
	int sum;
	int score;
	public:
	void setdata()
	{cin>>sum;
	cin>>score;
	}
	void display()
	{cout<<"sum="<<sum<<endl;
	cout<<"score"<<score<<endl;
};};
student stud1,stud2;

int main()
{stud1.setdata();
stud2.setdata();
stud1.display();
stud2.display();
return 0;
}
include<stdio.h>
int main(){
	char a[20];
	int sumj,sumo,n;
	scanf("%d",&a[20]);
	for(n=15;n>=0;n-4){
		sumj=a[n]+a[n-2];
	}
	for(n=15;n>=0;n-4){
		if(2*a[n]>10) a[n]=a[n]-9;
		sumo=a[n]+a[n-4];
	}
	if((sumo+sumj)%10==0)
	{printf("正确");
	}else
	{printf("错误");}
    return 0;
	}
	//上错误
	#include<stdio.h>
#include<string.h>
char s[50]; 
int main()
{
     gets(s);
     int oddSum=0,evenSum=0;
     int i;
     for(i=strlen(s)-1;i>=0;i-=2)
     {
         oddSum+=(s[i]-48);
     }
     for(i=strlen(s)-2;i>=0;i-=2)
     {
         int wenum=2*(s[i]-48);
         if(wenum>=10)
         {
             evenSum+=(wenum-9);
         }else{
             evenSum+=wenum;
         }
     }
     if((evenSum+oddSum)%10==0)
     {
         printf("成功\n");
     }else{
         printf("失败\n");
     }
     return 0;
}
大数加法（函数）
string BigPlus(string num1,string num2){
    //默认使得num1位数大于num2，方便后续运算。
    if(num1.size()<num2.size()){
        string temp=num2;
        num2=num1;
        num1=temp;
    }
    int lenth1=num1.size(),lenth2=num2.size(),flag=0,a,b,sum;//初始化位数、进位标志、定义转换数字a、b和sum
    while(lenth1>0){//lenth1总是大于等于lenth2
        a=num1[lenth1-1]-'0';//转换为数字
        if(lenth2>0){
            b=num2[lenth2-1]-'0';//转换为数字
        }
        else{
            b=0;//num2位数加完了
        }
        sum=a+b+flag;//当前位加进位
        if(sum>=10){//进位判断
            flag=1;//进位标记
            num1[lenth1-1]='0'+sum%10;//取个位
        }
        else{
            flag=0;//进位标记清除
            num1[lenth1-1]='0'+sum;
        }
        //每次向前进位
        lenth1--;
        lenth2--;
    }
    if(flag){
        num1="1"+num1;//当最高位进位，在前面加1
    }
    return num1;//返回得到的和
}
见笔记分析、（待实践）




#include<iostream>
using namespace std;
int main(){
	cout<<"please enter your name and age "<<endl;
	char a[10];
	int age;
	cin>>age;
	cin>>name;
	cout<<"your name is "<<name<<endl;
	cout<<"your age is"<<age<<endl;
	return 0;
}
#include<iostream>
using namespace std;
T max(Ta,Tb,Tc)
{
	if(b>a) a=b;
	if(c>a) a=c;
return a;
}
int main(){
	int iq=8,i2=3,i3=5;
	float d1=2.5,d2=3.4,d3=5.6;
	long f1=1563,f2=-456,f3=45121;
	i=max(i1,i2,i3);
	d=max(d1,d2,d3);
	f=max(f1,f2,f3);
	cout<<"  "<<i<<endl;
	cout<<"  "<<d<<endl;
	cout<<"  "<<f<<endl;
	return 0;
}
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int i=3,j=5;
	swap(i,j);
	cout<<"i="<<i<<" "<<j<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int main(void){
	int num;
	int dai;
	int m;
	float rich=1000;
	for(;;){
		cout<<"欢迎：\n0 余额\n1 取出\n2 存入\n3 清空账户\n4 退出\nPlease choose:";
		cin>>num;
		switch(num){
		case 0:
			cout<<"You have "<<rich;
		break;
		case 1:
		cout<<"输入取出金额 ";
		cin>>dai;
		rich=rich-dai;
		break;
		case 2:
		cout<<"存入 ";
		cin>>dai;+
		-
		rich=rich+dai;
		break;
		case 3:
		cout<<"请确认是否清除,0是\n1否";
		cin>>m;
		if(m==0){
			rich=0;
			cout<<"已清空账户";
		}else {return rich;}
		break;
		case 4:
		return 0;//没有则报错，且不能有break,不然default语句永远无法实现 
		default:
		cout<<"欢迎：\n0 余额\n1 取出\n2 存入\n3 清空账户\n4 退出\nPlease choose:";
		break;
	}
}
}
//逆序输出
#include<stdio.h>
int num(int n){
	int i=0,j=0,t;
	while(1){
		t=n%10;
		i=i*10+t;
		n/=10;
	if(n/10==0){
		return i=i*10+n;
	}	
	}
}
int main(){
	int n,k;
	scanf("%d",&n);
	k=num(n);
	printf("%d",k);
	return 0;
}
#include<stdio.h>
#include<math.h>
int yz(int a,int b, int c){
	return pow(b,2)-4*a*c;
}
void show1(int a, int b, int c){
	float x1,x2;
	x1=(-b+sqrt(yz(a,b,c)))/(2*a);
	x2=(-b-sqrt(yz(a,b,c)))/(2*a);
	printf("%f%f",x1,x2);
}
void show2(int a, int b, int c){
	float x1,x2;
x1=x2=(-b)/(2*a);
	printf("%f",x1);
}
void show3(){
	printf("wujie");
}

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(yz(a,b,c)>0){
		show1(a,b,c);
	}
	if(yz(a,b,c)==0){
			show2(a,b,c);
	}
	if(yz(a,b,c)<0){
			show3();
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int IsPrime(int m){
        int  x;
        int flag=0 ;
        int i = 2;
        x = sqrt(m);
        for(; i<=x; i++)
            if(m%i==0)
                break;
        if(i>x&&m>=2)
            flag = 1;
        return flag;
}
int main()
{
  int m,i;
  scanf("%d",&m);
  for(i=m+1;i<999999;i++){
    if(IsPrime(i)){
        printf("%d",i);
    break;
    }
  }
return 0;
}
/*=============================================================================
#     FileName: Facecheck.cpp
#         Desc: detect faces and eyes by opencv
#       Author: Spike
#   LastChange: 2020.6.16
=============================================================================*/

#include "opencv2/opencv.hpp"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

using namespace std;
using namespace cv;

void detectAndDraw(Mat& Frame, CascadeClassifier& cascade,CascadeClassifier& nestedCascade,double Scale, bool f);
void hide();
void Start_screen();
void MoveCursor(int x, int y);


int main( int argc, char** argv ) {

    //隐藏光标
    hide();

    //绘制初始界面
    Start_screen();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    printf("\n如若希望退出程序请按下Esc!!!\n\n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

    //打开摄像头
    VideoCapture cap(0);

    //摄像头未打开提醒
    if (!cap.isOpened()) {
        cout << "Couldn't open the camera!" << endl;
        return -1;
    }

    CascadeClassifier cascade, nestedCascade;

    //加载级联分类器
    cascade.load("C:\\Users\\14103\\Downloads\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_alt.xml");
    nestedCascade.load("C:\\Users\\14103\\Downloads\\opencv\\sources\\data\\haarcascades\\haarcascade_eye_tree_eyeglasses.xml");

    Mat Frame;

    while (true) {

        //读取图片
        cap >> Frame;

        //缩放比例
        double Scale = 1.2;
        Mat Small_Img(Frame.rows / Scale, Frame.cols / Scale, CV_8SC1);
        resize(Frame, Frame, Small_Img.size(), 0, 0, INTER_LINEAR);

        //识别函数
        detectAndDraw(Frame, cascade, nestedCascade, 2, 0);

        //按Esc退出程序
        int key;
        key = waitKey(10);
        if (key == 'q' || key == 'Q' || key == 27)
            break;
    }

    return 0;
}

inline void hide() {
    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void MoveCursor(int x, int y)//设置光标位置
{
    COORD pos = { x * 2,y };
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos); //设置控制台光标位置
}

inline void Start_screen()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
    MoveCursor(12, 10);
    printf("Cpp期末大作业 : 基于Opencv的人脸检测和眼部检测");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    MoveCursor(17, 14);
    printf("XXXX 2020.6.8");
    MoveCursor(19, 16);
    printf("学号 : xxxxxxx");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
    MoveCursor(20, 20);
    printf("按回车键开始");
    getchar();
    system("cls");
}

void detectAndDraw(Mat& Frame, CascadeClassifier& cascade,CascadeClassifier& nestedCascade,double Scale, bool f) 
{

    //建立用于存放人脸的向量容器
    vector<Rect> face_1, face_2;

    //定义7种颜色，用于标记人脸
    Scalar colors[] =
    {
        // 红橙黄绿青蓝紫
        CV_RGB(255,0,0),
        CV_RGB(255, 97, 0),
        CV_RGB(255, 255, 0),
        CV_RGB(0, 255, 0),
        CV_RGB(255, 97, 0),
        CV_RGB(0, 0, 255),
        CV_RGB(160, 32, 240),
    };

    //建立缩小的图片，加快检测速度
    Mat gray, Small_Img(cvRound(Frame.rows / Scale), cvRound(Frame.cols / Scale), CV_8UC1);

    //因为用的是基于灰度图像的类haar特征，所以要转换成灰度图像
    cvtColor(Frame, gray, CV_BGR2GRAY);

    //改变图像大小，双线性差值
    resize(gray, Small_Img, Small_Img.size(), 1 / Scale, 1 / Scale, INTER_LINEAR);

    //直方图均值化
    equalizeHist(Small_Img, Small_Img);

    //计算执行时间
    //t = (double)cvGetTickCount();

    //检测人脸
    cascade.detectMultiScale(Small_Img, face_1, 1.1, 3, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

    //翻转图像
    //if (f) {
    //    cascade.detectMultiScale(Small_Img, face_2, 1.1, 3, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));
    //    for (vector<Rect>::const_iterator r = face_2.begin(); r != face_2.end(); r++)
    //      face_1.push_back(Rect(r->x, r->y, r->width, r->height));
    //    
    //}

    //执行时间检测结束
    /*t = (double)cvGetTickCount() - t;
    printf("Ttime = %g ms\n", t * 1000 / getTickFrequency());*/

    int i = 0;

    for (vector<Rect>::const_iterator iter = face_1.begin(); iter != face_1.end(); iter++, i++) {

        //圆心
        Point center;
        //颜色
        Scalar color = colors[i % 7];
        //半径
        int radius;

        //计算图像比例
        double aspect_ratio = (double)iter->width / iter->height;

        if (0.75 < aspect_ratio && aspect_ratio < 1.3) {

            //还原尺寸&计算半径
            center.x = cvRound((iter->x + iter->width * 0.5) * Scale);
            center.y = cvRound((iter->y + iter->height * 0.5) * Scale);
            radius = cvRound((iter->width + iter->height) * 0.25 * Scale);
            //绘制矩形
            rectangle(Frame, cvPoint(cvRound(iter->x * Scale), cvRound(iter->y * Scale)),
                cvPoint(cvRound((iter->x + iter->width - 1) * Scale), cvRound((iter->y + iter->height - 1) * Scale)),
                color, 3, 8, 0);
            //绘制圆形
            circle(Frame, center, radius, color, 3, 8, 0);
        }
        else
            rectangle(Frame, cvPoint(cvRound(iter->x * Scale), cvRound(iter->y * Scale)),
                cvPoint(cvRound((iter->x + iter->width - 1) * Scale), cvRound((iter->y + iter->height - 1) * Scale)),
                color, 3, 8, 0);

        vector<Rect> Nested_Objects;

        //人眼检测
        nestedCascade.detectMultiScale(Small_Img, Nested_Objects, 1.1, 3, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

        //避免重复查找
        if (nestedCascade.empty())
            continue;

        for (vector<Rect>::const_iterator Eye_iter = Nested_Objects.begin(); Eye_iter != Nested_Objects.end(); Eye_iter++, i++)
        {
            Mat smallImgROI;

            //还原尺寸&计算半径
            center.x = cvRound((Eye_iter->x + Eye_iter->width * 0.5) * Scale);
            center.y = cvRound((Eye_iter->y + Eye_iter->height * 0.5) * Scale);
            radius = cvRound((Eye_iter->width + Eye_iter->height) * 0.25 * Scale);
            
            // 画圆
            circle(Frame, center, radius, color, 3, 8, 0);
        }

    }

    //设置窗口
    cv::imshow("XXX的人脸识别窗口", Frame);

}
