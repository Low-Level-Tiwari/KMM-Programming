#include <stdio.h>
#define ui64 unsigned long
#define ui32 unsigned int
#define none void
#define addr void*
#define valueAt(x,y) (*((y*)(x)))
#define valueAtWithIndex(x,y,z) (*(((y*)(x))+z))

/////////////////////////////////////////////////////////////

ui64 binsearch(addr a, ui64 s, ui64 n){
	ui64 l,h,mid;
	l = 0;
	h = n;
	ui64 output = -1;
	while(l<=h){
		mid = (l+h)/2;
		if (valueAtWithIndex(a,ui64,mid) == s){
			output = mid;l=h+1;
		}
		else if (valueAtWithIndex(a,ui64,mid) < s) l = mid+1;
		else h = mid-1;
	}
	return output;
}

none main(){
	ui64 n,i,l,k;
	scanf("%ld",&n);
	ui64 a[n];

	i=-1;
	while((++i)<n)scanf("%ld",&a[i]);
	scanf("%ld",&k);

	i=-1;
	while((++i)<k)
	{
		scanf("%ld",&l);
		binsearch(a,l,n);
	}
}
