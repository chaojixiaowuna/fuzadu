//����num������0��n������������������ȱ��һ�����ҳ�ȱʧ��������ʱ�临�Ӷ�O��N��
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
//			printf("ȱ�ٵ�����%d",i);
//			break;
//		}
//	}
//		return 0;
//	}
//ʱ�临�Ӷ�Ϊ 0��N^2��

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
//	printf("ȱ�ٵ�������%d",tmp);
//	return 0;
//}
//ʱ�临�Ӷ��� 0��N��

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
//	printf("ȱ�ٵ�������%d",tmp);
//	return 0;
//}
//ʱ�临�Ӷ��� 0��N��
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
//qsortʱ�临�Ӷ���0��n*logn��

//������ֵ�Ǽ����ڵڼ���λ��д�����ֵ
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
//		printf("ȱ�ٵ�������%d",i);
//		break;
//		}
//	}
//	return 0;
//}
//ʱ�临�Ӷ��� 0��N��