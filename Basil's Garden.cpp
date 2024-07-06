#include<iostream>
main(int n){for(scanf("%d");std::cin>>n;){int a[n];for(int&i:a)std::cin>>i;for(int i=n-2;~i;--i)a[i]=std::max(a[i],a[i+1]+1);std::cout<<a[0]<<" ";}}
