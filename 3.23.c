//void myqsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*))
//{
//	int i, j;
//	char* st = (char*)base; //void *������Ӽ�����char *�Ӽ��������ֽ���תΪ1��������ơ�
//	char tmp[16]; //���ǵ�long double���ͣ���ʱ�ռ�����16�ֽڱȽϱ���
//
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //ð�ݳ���ѭ��ͷ
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //�Ƚϵ�ʱ����תע���size
//			{
//				memcpy(tmp, st + j * size, size); //����������memcpy��ɾͲ�������⡣
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//int main()
//{
//
//
//	return 0;
//}
//void reverse_part(char* str, int start, int end) //���ַ�����start��end��һ������
//{
//	int i, j;
//	char tmp;
//
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len;
//	reverse_part(src, 0, pos - 1); //����ǰ��
//	reverse_part(src, pos, len - 1); //������
//	reverse_part(src, 0, len - 1); //��������
//}
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //�Ͽ�λ�õ��±�
//	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
//
//	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
//	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
//	strcpy(src, tmp); //��󿽻�ȥ
//}
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //����Ϊ5������£���ת6��11��16...���൱��1�Σ�7��12��17...���൱��2�Σ��Դ����ơ�
//	for (i = 0; i < time; i++) //ִ��k�εĵ���ƽ��
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //����ƽ��
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) //��һ��������������Ҫ����
//{
//	int i = 0, j = x - 1; //�����Ͻǿ�ʼ����
//
//	while (j >= 0 && i < y)
//	{
//		if (a[i][j] < f) //���Ҵ������
//		{
//			i++;
//		}
//		else if (a[i][j] > f) //����С������
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[][3] = { {1, 3, 5},
//				  {3, 5, 7},
//				  {5, 7, 9} }; //һ��ʾ��
//
//	if (findnum(a, 3, 3, 2))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}