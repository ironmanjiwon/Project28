//10장. 문자열

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
	printf("문자열 %s의 길이는 %d입니다.\n", str, i);

	return 0;
}

//문자열 A barking dog never bites의 길이는 25입니다.


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
	printf("입력 문자열: %s\n", line);
	printf("출력 문자열: %s\n", line2);

	return 0;
}

//입력 문자열 : abcd % ^@#hj
//출력 문자열 : abcdhj


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
	printf("패스워드를 입력하세요: ");

	for (i = 0; i < 8; i++)
	{
		password[i] = _getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");

	printf("입력된 패스워드는 다음과 같습니다: ");
	printf("%s\n", password);

	return 0;
}

//패스워드를 입력하세요 : ********
//입력된 패스워드는 다음과 같습니다 : 12345678


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
		printf("왼쪽 이동: ←, 오른쪽 이동: →, 위쪽 이동: ↑, 아래쪽 이동: ↓\n");

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

//왼쪽 이동 : ←, 오른쪽 이동 : →, 위쪽 이동 : ↑, 아래쪽 이동 : ↓
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

	printf("이름이 어떻게 되시나요? ");
	scanf("%s", name);

	printf("어디 사시나요? ");
	scanf("%s", address);

	printf("안녕하세요. %s에 사는 %s씨.\n", address, name);

	return 0;
}

//이름이 어떻게 되시나요 ? 박지원
//어디 사시나요 ? 풍암동
//안녕하세요.풍암동에 사는 박지원씨.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];

	printf("이름이 어떻게 되시나요? ");
	gets_s(name, 99);

	printf("어디 사시나요? ");
	gets_s(address, 99);

	printf("안녕하세요. %s에 사는 %s씨.\n", address, name);

	return 0;
}

//이름이 어떻게 되시나요 ? 박지원
//어디 사시나요 ? 한남동
//안녕하세요.한남동에 사는 박지원씨.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "abcdefgh";
	int len = strlen(s);
	printf("문자열 %s의 길이 = %d \n", s, len);

	return 0;
}

//문자열 abcdefgh의 길이 = 8


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);

	printf("복사된 문자열 = %s\n", dst);

	return 0;
}

//복사된 문자열 = Hello


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

	printf("첫 번째 단어를 입력하세요: ");
	scanf("%s", s1);
	printf("두 번째 단어를 입력하세요: ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	else if (result == 0)
		printf("%s가 %s와 같습니다.\n", s1, s2);
	else
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);

	return 0;
}

//첫 번째 단어를 입력하세요 : Hello
//두 번째 단어를 입력하세요 : World
//Hello가 World보다 앞에 있습니다.


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
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);

	printf("맞았습니다!");

	return 0;
}

//임베디드 장치에 가장 많이 사용되는 언어는 ? Java
//임베디드 장치에 가장 많이 사용되는 언어는 ? Python
//임베디드 장치에 가장 많이 사용되는 언어는 ? C
//맞았습니다!


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
		printf("\n문자열을 입력하세요: %s \n", answer);
		printf("글자를 추측하세요: ");
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
			printf("\n\n정답은 % s", answer);
			break;
		}
	}

	return 0;
}

//문자열을 입력하세요 : ____ __ ________
//글자를 추측하세요 :
//문자열을 입력하세요 : m___ __ m_______
//글자를 추측하세요 :
//문자열을 입력하세요 : mee_ __ m_______
//글자를 추측하세요 :
//문자열을 입력하세요 : mee_ a_ m_______
//글자를 추측하세요 :
//문자열을 입력하세요 : meet at m______t
//글자를 추측하세요 :
//문자열을 입력하세요 : meet at m_d____t
//글자를 추측하세요 :
//문자열을 입력하세요 : meet at m_dn___t
//글자를 추측하세요 :
//문자열을 입력하세요 : meet at midni__t
//글자를 추측하세요 :
//문자열을 입력하세요 : meet at midnig_t
//글자를 추측하세요 :
//
//정답은 meet at midnight


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
		printf("%s의 원래 단어를 맞춰보세요: ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);

	printf("축하합니다.\n");

	return 0;
}

//epalp의 원래 단어를 맞춰보세요 : apple
//축하합니다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = {
		"init", "open", "close", "read", "write"
	};

	for (i = 0; i < 5; i++)
		printf("%d 번째 메뉴: %s \n", i, menu[i]);

	return 0;
}

//0 번째 메뉴 : init
//1 번째 메뉴 : open
//2 번째 메뉴 : close
//3 번째 메뉴 : read
//4 번째 메뉴 : write


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
	int i, index;
	char dic[WORDS][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"},
	};
	char word[30];

	printf("영어 단어를 입력하세요: ");
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
	printf("사전에서 발견되지 않았습니다.\n");

	return 0;
}

//영어 단어를 입력하세요: rain
//rain: 비


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
	printf("\n변경 후 \n");

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
//변경 후
//apple
//avocado
//banana
//pear
//pineapple
//tomato