//数组num包含从0到n的所有整数，但其中缺了一个，找出缺失的整数，时间复杂度O（N）
//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,5,6,7,8,0,3,10,9};
//	int i,j;
//	for(i=0;i<11;i++)
//	{
//		for(j=0;j<10;j++)
//		{
//		if(i==arr[j])
//		{
//					break;
//		}
//	    }
//		if(j==10)
//		{
//			printf("缺少的数是%d",i);
//			break;
//		}
//	}
//		return 0;
//	}
//时间复杂度为 0（N^2）

//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,5,6,7,8,0,3,10,4};
//	int i,j;
//	int a=0,b=0;
//	int tmp;
//	for(i=0;i<10;i++)
//	{
//		a=a^arr[i];
//	}
//	for(j=0;j<11;j++)
//	{
//		b=b^j;
//	}
//	tmp=a^b;
//	printf("缺少的数字是%d",tmp);
//	return 0;
//}
//时间复杂度是 0（N）

//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,5,6,7,8,0,3,10,4};
//	int i,j;
//	int a=0,b=0;
//	int tmp;
//	for(i=0;i<10;i++)
//	{
//		a=a+arr[i];
//	}
//	for(j=0;j<11;j++)
//	{
//		b=b+j;
//	}
//	tmp=b-a;
//	printf("缺少的数字是%d",tmp);
//	return 0;
//}
//时间复杂度是 0（N）
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void*a,const void*b)
//{
//	return *(int*)a-*(int*)b;
//}
//int main()
//{
//	int arr[10]={1,2,5,6,7,8,0,3,10,4};
//	int i;
//	qsort(arr,10,sizeof(arr[0]),compare);
//	for(i=0;i<11;i++)
//	{
//		if(arr[i]!=i)
//		{
//			printf("%d",i);
//			break;
//		}
//	}
//	return 0;
//}
//qsort时间复杂度是0（n*logn）

//数组中值是几就在第几个位置写下这个值
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10]={1,2,5,6,7,8,0,3,10,4};
//	int abb[11]={0};
//	int i;
//	memset(abb,-1,44);
//	for(i=0;i<10;i++)
//	{
//		abb[arr[i]]=arr[i];
//	}
//	for(i=0;i<11;i++)
//	{
//		if(abb[i]==(-1))
//		{
//		printf("缺少的数字是%d",i);
//		break;
//		}
//	}
//	return 0;
//}
//时间复杂度是 0（N）