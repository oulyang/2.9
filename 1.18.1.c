#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test1.txt", "wb");
//	fwrite(&a, 4, 1, pf);//写1个4个字节的数据
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//fopen("../1.18.1.txt","r") //../表示上一路径
//
//	//fopen("C:\\bbb\\1.18\\test.txt");//绝对路径
//
//	FILE* pf = fopen("test1.txt", "w");//相对路径
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfw = fopen("TEST.txt", "w");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	fputc('b', pfw);
//	fputc('o', pfw);
//	fputc('s', pfw);
//	fputc('s', pfw);
//
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfr = fopen("TEST.txt", "r");
//	if (pfr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}

//	printf("%c",fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//
//	fclose(pfr);
//	pfr = NULL;
//	return 0;
//}

//stdin-键盘-标准输入设备
//stdout-屏幕-标准输出设备

//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	char buf[200] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 200, pf);
//
//	//printf("%s", buf);
//	puts(buf);//会自动换行
//
//	fgets(buf, 200, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[200] = { 0 };
//	FILE* pfw = fopen("TEST.txt", "w");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputs("hello\n", pfw);
//	fputs("word\n", pfw);//无自动换行
//
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[200] = { 0 };
//	//fgets(buf, 200, stdin);
//	//fputs(buf, stdout);
//
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}
