//10��. ���ڿ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the captial city of Korea";

	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}

//Seoul is the captial city of Korea

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[] = "komputer";

	printf("%s\n", str);
	str[0] = 'c';
	printf("%s\n", str);

	return 0;
}

//komputer
//computer


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.\n", str, i);

	return 0;
}

//���ڿ� A barking dog never bites�� ���̴� 25�Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char line[100] = "abcd%^@#hj";
	char line2[100] = "";
	int k = 0;
	int i = 0;

	while (line[i] != '\0')
	{
		if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
		{
			line2[k] = line[i];
			k++;
		}
		i++;
	}

	line2[k] = '\0';
	printf("�Է� ���ڿ�: %s\n", line);
	printf("��� ���ڿ�: %s\n", line2);

	return 0;
}

//�Է� ���ڿ� : abcd % ^@#hj
//��� ���ڿ� : abcdhj


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;
	ch = getchar();
	putchar(ch);

	return 0;
}

//a
//a


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ch;
	ch = _getch();
	_putch(ch);

	return 0;
}

//a


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ch;
	ch = getchar();
	putchar(ch);

	printf("\nch = %d \n", ch);

	ch = _getch();
	_putch(ch);

	printf("\nch = %d \n", ch);

	return 0;
}

//a
//a
//ch = 97
//b
//ch = 98


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	char password[10];
	int i;

	system("cls");
	printf("�н����带 �Է��ϼ���: ");

	for (i = 0; i < 8; i++)
	{
		password[i] = _getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");

	printf("�Էµ� �н������ ������ �����ϴ�: ");
	printf("%s\n", password);

	return 0;
}

//�н����带 �Է��ϼ��� : ********
//�Էµ� �н������ ������ �����ϴ� : 12345678


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char board[10][10] =
	{
		{'#','#','#','#','.','.','.','.','.','.'},
		{'.','.','.','.','.','#','.','.','.','.'},
		{'#','#','#','.','#','.','.','.','.','.'},
		{'.','.','#','.','.','#','.','.','.','.'},
		{'.','.','#','.','.','#','.','.','.','.'},
		{'.','.','#','.','.','#','.','.','.','.'},
		{'.','.','.','#','.','.','#','#','.','.'},
		{'.','.','.','.','#','.','.','.','#','#'},
		{'.','.','.','.','.','#','.','.','.','.'},
		{'.','.','.','.','.','#','#','#','#','#'}
	};
	int xpos = 0, ypos = 1;
	int x, y, ch, ch2;
	board[ypos][xpos] = '@';

	while (1)
	{
		system("cls");
		printf("���� �̵�: ��, ������ �̵�: ��, ���� �̵�: ��, �Ʒ��� �̵�: ��\n");

		for (y = 0; y < 10; y++)
		{
			for (x = 0; x < 10; x++)
				printf("%c", board[y][x]);
			printf("\n");
		}
		board[ypos][xpos] = '.';
		ch = _getch();

		if (ch == 224)
		{
			ch2 = _getch();
			if (ch2 == 75)
				xpos--;
			else if (ch2 == 80)
				ypos++;
			else if (ch2 == 72)
				ypos--;
			else if (ch2 == 77)
				xpos++;
		}
		board[ypos][xpos] = '@';
	}
	return 0;
}

//���� �̵� : ��, ������ �̵� : ��, ���� �̵� : ��, �Ʒ��� �̵� : ��
//####......
//@....#....
//###.#.....
//..#..#....
//..#..#....
//..#..#....
//...#..##..
//....#...##
//.....#....
//.....#####


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���? ");
	scanf("%s", name);

	printf("��� ��ó���? ");
	scanf("%s", address);

	printf("�ȳ��ϼ���. %s�� ��� %s��.\n", address, name);

	return 0;
}

//�̸��� ��� �ǽó��� ? ������
//��� ��ó��� ? ǳ�ϵ�
//�ȳ��ϼ���.ǳ�ϵ��� ��� ��������.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���? ");
	gets_s(name, 99);

	printf("��� ��ó���? ");
	gets_s(address, 99);

	printf("�ȳ��ϼ���. %s�� ��� %s��.\n", address, name);

	return 0;
}

//�̸��� ��� �ǽó��� ? ������
//��� ��ó��� ? �ѳ���
//�ȳ��ϼ���.�ѳ����� ��� ��������.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "abcdefgh";
	int len = strlen(s);
	printf("���ڿ� %s�� ���� = %d \n", s, len);

	return 0;
}

//���ڿ� abcdefgh�� ���� = 8


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);

	printf("����� ���ڿ� = %s\n", dst);

	return 0;
}

//����� ���ڿ� = Hello


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[11] = "Hello";
	strcat(s, "World");
	printf("%s \n", s);

	return 0;
}

//HelloWorld


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80];
	char s2[80];
	int result;

	printf("ù ��° �ܾ �Է��ϼ���: ");
	scanf("%s", s1);
	printf("�� ��° �ܾ �Է��ϼ���: ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	else if (result == 0)
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);

	return 0;
}

//ù ��° �ܾ �Է��ϼ��� : Hello
//�� ��° �ܾ �Է��ϼ��� : World
//Hello�� World���� �տ� �ֽ��ϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80] = "this is a sample";
	strcat(s1, "Thank You!");
	printf("%s\n", s1);

	strcpy(s1, "Thank You!");
	printf("%s\n", s1);
	
	return 0;
}

//this is a sampleThank You!Thank You!


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80] = "this is a sample";
	char s2[80] = "this is a sample";

	if (strcmp(s1, s2) == 0)
	{
		printf("if\n");
	}
	else
	{
		printf("else\n");
	}

	return 0;
}

//if


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char key[] = "C";
	char buffer[80] = "";

	do
	{
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����? ");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);

	printf("�¾ҽ��ϴ�!");

	return 0;
}

//�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ���� ? Java
//�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ���� ? Python
//�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ���� ? C
//�¾ҽ��ϴ�!


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1)
	{
		printf("\n���ڿ��� �Է��ϼ���: %s \n", answer);
		printf("���ڸ� �����ϼ���: ");
		ch = _getch();
		i = 0;

		while (solution[i] != '\0')
		{
			if (solution[i] == ch)
				answer[i] = ch;
			i++;
		}

		if (strcmp(solution, answer) == 0)
		{
			printf("\n\n������ % s", answer);
			break;
		}
	}

	return 0;
}

//���ڿ��� �Է��ϼ��� : ____ __ ________
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : m___ __ m_______
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : mee_ __ m_______
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : mee_ a_ m_______
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : meet at m______t
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : meet at m_d____t
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : meet at m_dn___t
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : meet at midni__t
//���ڸ� �����ϼ��� :
//���ڿ��� �Է��ϼ��� : meet at midnig_t
//���ڸ� �����ϼ��� :
//
//������ meet at midnight


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOL "apple"

int main(void)
{
	char s[100] = SOL;
	char ans[100];
	int i, len, pos1, pos2;
	char tmp;
	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		pos1 = rand() % len;
		pos2 = rand() % len;
		tmp = s[pos1];
		s[pos1] = s[pos2];
		s[pos2] = tmp;
	}

	do {
		printf("%s�� ���� �ܾ ���纸����: ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);

	printf("�����մϴ�.\n");

	return 0;
}

//epalp�� ���� �ܾ ���纸���� : apple
//�����մϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = {
		"init", "open", "close", "read", "write"
	};

	for (i = 0; i < 5; i++)
		printf("%d ��° �޴�: %s \n", i, menu[i]);

	return 0;
}

//0 ��° �޴� : init
//1 ��° �޴� : open
//2 ��° �޴� : close
//3 ��° �޴� : read
//4 ��° �޴� : write


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
	int i, index;
	char dic[WORDS][2][30] = {
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"},
	};
	char word[30];

	printf("���� �ܾ �Է��ϼ���: ");
	scanf("%s", word);
	index = 0;

	for (i = 0; i < WORDS; i++)
	{
		if (strcmp(dic[index][0], word) == 0)
		{
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");

	return 0;
}

//���� �ܾ �Է��ϼ���: rain
//rain: ��


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main(void)
{
	int i, k;
	char tmp[20];
	char fruits[SIZE][20] = {
		"pineapple", "banana", "apple", "tomato", "pear", "avocado"
	};

	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);
	for (k = 0; k < SIZE; k++)
	{
		for (i = 0; i < SIZE - 1; i++)
		{
			if (strcmp(fruits[i], fruits[i + 1]) > 0)
			{
				strcpy(tmp, fruits[i]);
				strcpy(fruits[i], fruits[i + 1]);
				strcpy(fruits[i + 1], tmp);
			}
		}
	}
	printf("\n���� �� \n");

	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);

	return 0;
}

//pineapple
//banana
//apple
//tomato
//pear
//avocado
//
//���� ��
//apple
//avocado
//banana
//pear
//pineapple
//tomato