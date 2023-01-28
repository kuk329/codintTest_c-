#include<bits/stdc++.h>
using namespace std;

// 재귀함수 
 
// 1. 팩토리얼 (재귀함수로 구현) 
int fact(int n){
	if(n==1||n==0) return 1;
	return n*fact(n-1);
}

//2. 팩토리얼 (반복문으로 구현) 
int fact1(int n){
	int ret=1;
	for(int i=1; i<=n; i++){
		ret*=i;
	}
	return ret;
}

// 3. 피보나치 (재귀함수로 구현)  
int fibo(int n){

	if(n==0||n==1) return n;
	return fibo(n-1) + fibo(n-2);
}

int n=5;
 
int main(){
	 cout<<fibo(n)<<" "<<fact(n)<<" "<<fact1(n)<<"\n";
	return 0;
}
