#include<bits/stdc++.h>
using namespace std;

// ����Լ� 
 
// 1. ���丮�� (����Լ��� ����) 
int fact(int n){
	if(n==1||n==0) return 1;
	return n*fact(n-1);
}

//2. ���丮�� (�ݺ������� ����) 
int fact1(int n){
	int ret=1;
	for(int i=1; i<=n; i++){
		ret*=i;
	}
	return ret;
}

// 3. �Ǻ���ġ (����Լ��� ����)  
int fibo(int n){

	if(n==0||n==1) return n;
	return fibo(n-1) + fibo(n-2);
}

int n=5;
 
int main(){
	 cout<<fibo(n)<<" "<<fact(n)<<" "<<fact1(n)<<"\n";
	return 0;
}
