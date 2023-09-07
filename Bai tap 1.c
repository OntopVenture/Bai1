#include <stdio.h>
#include <math.h>

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
	printf("do c chuyen doi qua F là %2f",F);
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
	long n, S;
	S =0;
	long i=0;
	printf("Input n: \n");
	scanf("%ld",&n);
	if(n>0){
	for(i=0; i<=n; i++){
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
	int i=0;
	printf("Input n: \n");
	scanf("%lu",&n);
	if(n>0){
		for(i=0; i<n+1; i++){
			tong = tong + i*i;
		}
		printf("Tong la: %lu",tong);
	} else{
		printf("Hay nhap lai n la so nguyen duong");
	}
}

int main(){
	baitap8();
	return 1;

}
