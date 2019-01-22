#include<stdio.h>

int get_len(int * a){
int p = 0,b=(sizeof(a)/sizeof(a[0]) );
	
	printf("b => %d\n",b);
	return b;

	/* while(1){
		b = a[p];
		if( b == NULL)
			return p;
		p++;
	}
	*/
}

void main(){
	int h,i,j=0,curr,arr[6] = {12,9,3,6,25,1};
	
	//int arr2[5] = arr;
	int c = sizeof(arr)/sizeof(arr[0]);

	int len = c;

	printf("C => %d\n",c);
	for(h=0;h<len;h++){
		//if()
		 //continue;
		for(i=0;i<len;i++){
		if(arr[h] < arr[i]){
			curr = arr[i];
			arr[i] = arr[h];
			arr[h] = curr;	
			printf("[%d] [%d] Switch %d with %d\n",h,i,arr[i],arr[h]);
		}
	}
	}

	for(j=0;j<len;j++){
	printf("Arr[%d] => %d\n",j,arr[j]);
}
	

return;
}
