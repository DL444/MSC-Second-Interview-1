#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main ()
{
	srand((unsigned)time (NULL));										//���õ�ǰʱ����Ϊ�������
	int i,new_car,new_car_place,space[20];								//20������������space�У�1-7Ϊͣ��λ��8��9Ϊ�Ⱥ�λ
	void situation(int space[]);
	void swap(int *pm ,int *pn);										// ������������������λ��

	for(i=1;i<=20;i++){													//20���������ŷ�
		space[i]=i;
	}
	for(i=20;i>=1;i--){													//20�����������
		swap(&space[i],&space[rand()%20+1]);
	}

	printf("�տ�ʼͣ�����Ⱥ����������ʾ:\n\n");
	situation(space);
	printf("\n�������һ���Ȳ���ͣ��λ�ֲ��ڵȺ�λ�����ĳ��ƺ�:\n");
	scanf("%d",&new_car);
	for(i=1;i<=9;i++){													//�ж����복���Ƿ�Ȳ���ͣ��λ�ֲ��ڵȺ�λ��
		if(new_car!=space[i]) continue;
		printf("��������ĳ����Ѵ���ͣ��λ���ߵȺ�λ�ϣ�����������\n");
		scanf("%d",&new_car);
		i=1;
	}
	
	for(i=1;i<=20;i++){													//�õ����복���������е�λ��
		if(space[i]==new_car) new_car_place=i;
	}

	if(abs(new_car-space[8]) <= abs(new_car-space[9])){					//ͣ��λ������˳�һ�������Ⱥ�λ�ĳ����룬���복������Ⱥ�λ
		swap(&space[rand()%7+1],&space[8]);
		swap(&space[8],&space[new_car_place]);
	}
	else{
		swap(&space[rand()%7+1],&space[9]);
		swap(&space[9],&space[new_car_place]);
	}
	printf("\n��һ�α任��ͣ�����Ⱥ����������ʾ:\n\n");
	situation(space);

	new_car=space[rand()%11+10];												//������10��20��λ�������ѡһ������Ϊnew_car
	printf("\n������ĵڶ����Ȳ���ͣ��λ�ֲ��ڵȺ�λ�����ĳ��ƺ�Ϊ�� %d \n",new_car);
	if(abs(new_car-space[8]) <= abs(new_car-space[9])){
		swap(&space[rand()%7+1],&space[8]);
		swap(&space[8],&space[new_car_place]);
	}
	else{
		swap(&space[rand()%7+1],&space[9]);
		swap(&space[9],&space[new_car_place]);
	}

	printf("\n�ڶ��α任��ͣ�����Ⱥ����������ʾ:\n\n");
	situation(space);

	new_car=space[rand()%11+10];
	printf("\n������ĵ������Ȳ���ͣ��λ�ֲ��ڵȺ�λ�����ĳ��ƺ�Ϊ�� %d \n",new_car);
	if(abs(new_car-space[8]) <= abs(new_car-space[9])){
		swap(&space[rand()%7+1],&space[8]);
		swap(&space[8],&space[new_car_place]);
	}
	else{
		swap(&space[rand()%7+1],&space[9]);
		swap(&space[9],&space[new_car_place]);
	}
	printf("\n�����α任��ͣ�����Ⱥ����������ʾ:\n\n");
	situation(space);

	return 0;
	
}

void swap(int *pm ,int *pn)
{
	int  temp;
	temp= *pm;
	*pm = *pn;
	*pn =temp;
}

void situation(int space[])
{
	printf("ͣ��λ A  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[1]);
	printf("ͣ��λ B  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[2]);
	printf("ͣ��λ C  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[3]);
	printf("ͣ��λ D  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[4]);
	printf("ͣ��λ E  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[5]);
	printf("ͣ��λ F  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[6]);
	printf("ͣ��λ G  ����ͣ�ĳ��ƺ�Ϊ %d \n",space[7]);
	printf("�Ⱥ�λ һ ����ͣ�ĳ��ƺ�Ϊ %d \n",space[8]);
	printf("�Ⱥ�λ �� ����ͣ�ĳ��ƺ�Ϊ %d \n",space[9]);
}
