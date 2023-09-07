#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cctype>

void baitap1(){
	int x,y;
	int tong, hieu, tich;
	float thuong;
	printf("Input value x, y: \n");
	scanf("%d, %d", &x, &y);
	tong = x+y;
	hieu = x-y;
	thuong = (float)x/y;
	tich = x*y;
	printf("Tong 2 so la: %d \n",tong);
	printf("Hieu 2 so la: %d \n",hieu);
	printf("Tich 2 so la: %d \n",tich);
	printf("Thuong 2 so la: %2f \n",thuong);
}
void baitap2(){
	int radius;
	float chuvi, dientich;
	printf("Input radius: \n");
	scanf("%d",&radius);
	chuvi = radius*2*3.14;
	dientich = radius*radius*3.14;
	printf("chu vi hinh tron la: %2f \n", chuvi);
	printf("dien tich hinh tron la: %2f \n", dientich);
}
void baitap3(){
	int x1, y1, x2, y2;
	float khoangcach;
	printf("Input x1, y1, x2, y2: \n");
	scanf("%d,%d,%d,%d",&x1,&y1,&x2,&y2);
	khoangcach=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("khoang cach 2 diem la %2f \n", khoangcach);
	
}
void baitap4(){
	float C, F;
	printf("Input C: \n");
	scanf("%f", &C);
	F=C*9/5+32;
	printf("do c chuyen doi qua F l� %2f",F);
}
void baitap5(){
	int a;
	printf("input a: \n");
	scanf("%d",&a);
	printf("Gia tri tuyet doi cua a la: %d \n", abs(a));
}
void baitap6(){
	int a,b,ketqua;
	printf("Input a,b: \n");
	scanf("%d,%d", &a, &b);
	ketqua = pow(a,b);
	printf("a^b co gia tri la: %d \n",ketqua);
}
void baitap7(){
	int x;
	float sqrtx;
	printf("Input x: \n");
	scanf("%d",&x);
	if(x>0){
		sqrtx = sqrt(x);
		printf("Gia tri can bac 2 cua x la: %2f \n", sqrtx);
	} else{
		printf("Gia tri nhap la am");
	}
}
void baitap8(){
	long long n, S;
	S =0;
	printf("Input n: \n");
	scanf("%ld",&n);
	if(n>0){
	for(long i=0; i<=n; i++){
		S = S+i;
	}
	printf("Tong la: %ld",S);
	} else{
	printf("Gia tri nhap nho hon 0");
	}
}
void baitap9(){
	unsigned long long n, tong;
	tong =0;
	printf("Input n: \n");
	scanf("%lu",&n);
	if(n>0){
		for(int i=1; i<n+1; i++){
			tong = tong + i*i;
		}
		printf("Tong la: %lu",tong);
	} else{
		printf("Hay nhap lai n la so nguyen duong");
	}
}
void baitap10(){
	int n;
	float Sn = 0;
	printf("Input n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		Sn = Sn+ 1/((float)i*(i+1));
	}
	printf("Sn = %2f", Sn);
	
}
void baitap11(){
	int n;
	long Sn = 0;
	printf("Input n: ");
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		Sn = Sn + i*2;
		
	}
	printf("Sn =: %d \n", Sn);
	
}
void baitap12(){
	int n;
	long Sn = 0;
	printf("Input n: ");
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		Sn = Sn + (pow(-1,i)*i);
	}
	printf("Sn = : %ld",Sn);
}
void baitap13(){
	
	int a, b;
	int c = 0;
	printf("Input a, b: ");
	scanf("%d, %d", &a, &b);
	if(a>b){
		int t =a/b;
		c = b*t;
		printf("So chia het lon nhat la: %d",c);
	} else{
		printf("a<b");
	}
}
void baitap14(){
		
	int a, b;
	int c = 0;
	printf("Input a, b: ");
	scanf("%d, %d", &a, &b);
	if(a>b){
		int t =a/b;
		c = b*(t+1);
		printf("So chia het nho nhat la: %d",c);
	} else{
		printf("a<b");
	}
}
void baitap15(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(n%2==0){
		printf("0");
	} else{
		printf("1");
	}
}
void baitap16(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(n%3==0&&n%5==0){
		printf("1");
	} else{
		printf("0");
	}
}
void baitap17(){
	int year;
	printf("Input year: ");
	scanf("%d", &year);
	if(year>0){
		if(year%4==0&&year%100!=0){
			printf("YES");
		}else{
			printf("NO");
		}
	} else{
		printf("INVALID");
	}
}
void baitap18(){
	int month, year;
	printf("Input month, year");
	scanf("%d, %d", &month, &year);
	if(month<=0 || year<=0||month>12){
		printf("INVALID");
	} else{
		if(month ==1 || month==3||month==5||month==7||month==8||month==10||month==12){
			printf("31");
		} else{
			if(month==2){
				if(year%4==0&&year%100!=0){
					printf("29");
				} else{
					printf("28");
				}
			} else{
				printf("30");
			}
		}
	}
	
	
	
}
void baitap19(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='a'&&x<='z'){
		printf("YES");
	}else{
		printf("NO");
	}
}
void baitap20(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='a'&&x<='z'){
		printf("NO");
	}else{
		printf("YES");
	}
}
void baitap21(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='a'&&x<='z'){
		printf("YES");
	}else if(x>='A'&&x<='Z'){
		printf("YES");
	} else{
		printf("NO");
	}
}
void baitap22(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='0'&&x<='9'){
		printf("YES");
	}else{
		printf("NO");
	}
}
void baitap23(){
char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='A'&&x<='Z'){
		char c = tolower(x);
		printf("%c",c);
	}else{
		printf("%c",x);
	}
}
void baitap24(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='a'&&x<='z'){
		char c = toupper(x);
		printf("%c",c);
	}else{
		printf("%c",x);
	}
}
void baitap25(){
	char x;
	printf("Input x: \n");
	scanf("%c",&x);
	if(x>='A'&&x<='Z'){
		if(x=='Z'){
			printf("a");
		} else{
		
		char c = x+33;
		printf("%c",c);
	}
	}else if (x>='a'&&x<='z'){
		if(x=='z'){
			printf("a");
		} else{
			char c = x+1;
			printf("%c", c);
		}
	} else{
		printf("INVALID");
	}
}
void baitap26(){
	int a, b,c, min, max;
	printf("Input a,b,c: \n");
	scanf("%d, %d, %d", &a, &b, &c);
	min = 0;
	max = 0;
	
	if(a>b){
		if(b>c){
			min = c;
			max = a;
			}else if(b<c){
					if(a>c){
						min = b;
						max = a;
					}else{
						min = b;
						max = c;
						}
				}else {
					min = c;
					max = a;
			
			}
	} else if (a<b){
			if(b<c){
				min = a;
				max = c;
					}else{
						min = a;
						max = c;
					}
			}else{
				if(b<c){
					min = a;
					max = c;
				}else if (b>c){
					min = c;
					max = b;
		} else{
			min = a;
			max = c;
		}
		
	}
		
	printf("%d %d",max,min);
}
void baitap27(){
	int a,b,c;
	printf("Input a,b,c la do dai 3 canh tam gia: \n");
	scanf("%d,%d,%d",&a, &b, &c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){
		printf("YES");
	}else{
		printf("NO");
	}
}
void baitap28(){
		int a,b,c;
	printf("Input a,b,c la do dai 3 canh tam gia: \n");
	scanf("%d,%d,%d",&a, &b, &c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){
		if(a==b&&a!=c){
			if(c*c==a*a+b*b){
				printf("4");
			}else{
				printf("2");
			}
		}
		if(b==c&&a!=c){
			if(a*a == c*c+b*b){
				printf("4");
			}else{
				printf("2");
			}
		}
		if(a==b&&b==c){
			printf("1");
		}
		if(a!=b&&b!=c&&c!=a){
		
				if(a*a == b*b + c*c|| b*b == a*a + c*c || c*c == a*a + b*b){
					printf("3");
				}
			else {
				printf("5");
			}
		
	}
	}else{
		printf("INVALID");
	}
}
void baitap29(){
	int days;
	int y,w,d;
	printf("Nhap so ngay: \n");
	scanf("%d",&days);
	y = days/365;
	w = (days - 365*y)/7;
	d = days - 365*y - 7*w;
	printf("%d %d %d", y, w,d);
}
int checkPrime(int n){
	int flag = -1;
	for(int i = 2; i<n/2; i++){
		if(n%i==0){
			flag = 1;
		}
	}
	return flag;
}

void baitap30(){
	
	int a,b,c;
	int delta;
	float x1, x2, x3;
	printf("Input a,b,c \n");
	scanf("%d,%d,%d",&a,&b,&c);
	delta = b*b-4*a*c;
	if(a==0&&b==0&&c==0){
		printf("PT vo so nghiem");
	}else{
		if(delta>0){
			x1= (-b-sqrt(delta))/(2*(float)a);
			x2= (-b+sqrt(delta))/(2*(float)a);
			printf("Phuong trinh co 2 nghiem: %2f %2f",x1,x2);
		}
		else if(delta==0){
			x3 = -b/(2*(float)a);
			printf("Phuong trinh co nghiem kep: %3f",x3);
		}
		else{
			printf("INF");
		}
		
	}
}
void baitap31(){
	int x;
	int i=2;
	printf("Input x: \n");
	scanf("%d",&x);

	for(int j=x-2; j>2; j--){
		if(checkPrime(i)==1&&checkPrime(j)==1){
			printf("%d %d",i,j);
			break;
		}
		i++;
	}
		
}
void baitap32(){
	int x;
	printf("Input x: \n");
	scanf("%d",&x);
	int n,m;
	if(abs(x)<=5){
		printf("1");
	}else{
		n = abs(x)%5;
		m=abs(x)-5*n;
		if(m>0){
			printf("%d",n+1);
			
		}else{
			printf("%d",n);
		}
	}
}
void baitap33(){
	int a,b;
	int dhipster, dnormal;
	printf("Input a,b: \n");
	scanf("%d,%d",&a,&b);
	if(a>b){
		dhipster = b;
		dnormal = (a-b)/2;
	} else{
		dhipster = a;
		dnormal = (b-a)/2;
	}
	printf("%d %d",dhipster, dnormal);
}

int main(){
	baitap33();
	return 0;
	
}
