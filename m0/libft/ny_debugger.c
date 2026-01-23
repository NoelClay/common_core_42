#include "libft.h"
#include <stdio.h>
#include <string.h>

// --- Part 1: Libc Functions ---
void debug_isalpha(void) { printf("isalpha: %d\n", ft_isalpha('a')); }
void debug_isdigit(void) { printf("isdigit: %d\n", ft_isdigit('1')); }
void debug_isalnum(void) { printf("isalnum: %d\n", ft_isalnum('?')); }
void debug_isascii(void) { printf("isascii: %d\n", ft_isascii(128)); }
void debug_isprint(void) { printf("isprint: %d\n", ft_isprint(' ')); }

void debug_strlen(void)
{
	char *str = "42youngnam";
	size_t len;

	len = ft_strlen(str);
	printf("Result: %ld\n", len);
}

void debug_memset(void)
{
	char *str = ft_strdup("12345678");
	int *a = (int *)calloc(sizeof(int), 3);

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	ft_memset(str, 97, 8);
	ft_memset(a, 97, 3);
	ft_memset(a, 1, 12);
	free(str);
	free(a);
}

void debug_bzero(void)
{
	char *str = ft_strdup("12345678");
	int *a = (int *)calloc(sizeof(int), 3);

	a[0] = 0x12345678;
	a[1] = 2;

	a[2] = 3;

	ft_bzero(str, 8);
	ft_bzero(a, 3);
	ft_bzero(a, 12);
	free(str);
	free(a);
}

void debug_memcpy(void)
{
	char *str = ft_strdup("1234567890123456");
	int *a = (int *)calloc(sizeof(int), 3);
	void *v;

	a[0] = 0x61616161;
	a[1] = 2;
	a[2] = 3;

	ft_memcpy(str, a, 3);
	ft_memcpy(str, a, 12);
	v = memcpy(((void *)0), ((void *)0), 3);
	free(str);
	free(a);
}

void debug_memmove(void)
{
	char cc[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'a', 'b', 'c'};
	char dd[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'a', 'b', 'c'};

	ft_memmove(cc + 3, cc, 5);
	ft_memcpy(dd + 3, dd, 5);
}

void debug_strlcpy(void)
{
	char dest[10];
	char *d2 = (char *)malloc(sizeof(char) * 5);
	char d3[10];
	char d4[10];

	ft_strlcpy(dest, "Hello", 10);
	ft_strlcpy(d2, "Hello", 10);
	ft_strlcpy(d3, "Hello", 5);
	ft_strlcpy(d4, "Hellow", 0);
	ft_strlcpy(d4, "Hellow", 2);
	ft_strlcpy(d4, "Hellow", 1);
	ft_strlcpy(d4, "Hellow", -1);
	free(d2);
}

void debug_strlcat(void)
{
	char dest[10] = "Hi";
	ft_strlcat(dest, "42", 10);
	ft_strlcat(dest, "  ", 4);
	ft_strlcat(dest, "NamYoung has been upset", 10);
	ft_strlcat(dest, "can you?", 15);
}

void debug_toupper(void) { printf("%c\n", ft_toupper('a')); }
void debug_tolower(void) { printf("%c\n", ft_tolower('A')); }

void debug_strchr(void)
{
	char *str = "Hello";
	char *answer;
	answer = ft_strchr("Hello", 'e');
	answer = ft_strchr("Hello", '\0');
	answer = ft_strchr("Hello", 'a');
}

void debug_strrchr(void)
{
	char *str = "Hello";
	char *answer;
	answer = ft_strrchr("Hello", 'l');
	answer = ft_strrchr("Hello", '\0');
	answer = ft_strrchr("Hello", 'a');
}

void debug_strncmp(void)
{
	char *str = "abcde";
	int ans;
	ans = ft_strncmp(str, "abd", 3);
	ans = ft_strncmp(str, "abd", 4);
	ans = ft_strncmp(str, "abcd", 4);
	ans = ft_strncmp(str, "zxc", 5);
}

void debug_memchr(void)
{
	char *str = "Hello";
	int a[] = {97, 98, 99, 100, 101};
	void *answer;
	answer = ft_memchr(str, 'l', 10);
	answer = ft_memchr(a, '\0', 5);
	answer = ft_memchr(a, 1, 3);
	answer = ft_memchr(a, 'a', 3);
}

void debug_memcmp(void)
{
	char *str = "abcde";

	int a[] = {97, 98, 99, 100, 101};
	int ans;
	ans = ft_memcmp(str, "abd", 3);
	ans = ft_memcmp(str, "abd", 4);
	ans = ft_memcmp(str, "abcd", 4);
	ans = ft_memcmp(str, "zxc", 5);
	int b[] = {1, 2, 3, 4, 5};
	ans = ft_memcmp(a, b, 3);
	int c[] = {97, 98, 100, 101, 102};
	ans = ft_memcmp(a, c, 4);
	ans = ft_memcmp(a, c, 12);
	int d[] = {97, 98, 99, 100, 101, 102};
	ans = ft_memcmp(a, d, 24);
	ans = ft_memcmp(a, c, 9);
}

void debug_strnstr(void)
{
	char *str = "lorem ipsum dolor sit amet";
	char *tmp = "\0";
	char *answer;

	answer = ft_strnstr(str, "lorem", 15);
	answer = ft_strnstr(str, "ipsum", 15);
	answer = ft_strnstr(str, "ipsum", 5);
	answer = ft_strnstr(str, "amet", 30);
	answer = ft_strnstr(str, "dolor", 0);
	answer = ft_strnstr(str, "", 15);
	answer = ft_strnstr(str, tmp, 15);
	answer = ft_strnstr(str, NULL, 15);
}
void debug_atoi(void)
{
	int ans;

	// [Group 1] Basic & Whitespace (기초 체력)
	ans = ft_atoi("42");
	ans = ft_atoi("   -42");
	ans = ft_atoi(" \t\n\v\f\r +42");
	ans = ft_atoi("0");

	// [Group 2] Leading Zeros (0이 앞에 붙어도 값은 같아야 함)
	ans = ft_atoi("00000042");
	ans = ft_atoi("   -00000042");

	// [Group 3] Cut-off (숫자 뒤 쓰레기 값 처리)
	ans = ft_atoi("42abc");			// 42에서 멈춤
	ans = ft_atoi("-42 123");		// -42에서 멈춤
	ans = ft_atoi("2147483647xyz"); // INT_MAX에서 멈춤

	// [Group 4] Integer Boundaries (정수 한계 돌파 테스트)
	ans = ft_atoi("2147483647");  // INT_MAX
	ans = ft_atoi("-2147483648"); // INT_MIN
	ans = ft_atoi("2147483648");  // INT_MAX + 1 (Overflow 시작)
	ans = ft_atoi("-2147483649"); // INT_MIN - 1 (Underflow 시작)

	// [Group 5] Hardcore Overflow (long long 범위 실험)
	ans = ft_atoi("9223372036854775807");		  // LONG_MAX
	ans = ft_atoi("-9223372036854775808");		  // LONG_MIN
	ans = ft_atoi("999999999999999999999999999"); // Garbage value expected

	// [Group 6] Invalid Format (0이 나와야 정상)
	ans = ft_atoi("   + 42"); // 부호 뒤 공백 -> 0
	ans = ft_atoi("   ++42"); // 부호 중복 -> 0
	ans = ft_atoi("   +-42"); // 부호 혼합 -> 0
	ans = ft_atoi("");		  // 빈 문자열 -> 0
}
void debug_calloc(void)
{
	int *arr;

	arr = ft_calloc(0, 0);
	free(arr);
	arr = calloc(0, 0);
	free(arr);
}

void debug_strdup(void)
{
	char *ans;

	ans = ft_strdup("Duplicate me");
	free(ans);
	ans = ft_strdup("");
	free(ans);
	ans = ft_strdup("   \t\n\v  ");
	free(ans);
	ans = ft_strdup("Cut\0Here");
	free(ans);
}

// --- Part 2: Additional Functions ---
void debug_substr(void)
{
	char *str = "0123456789";
	char *res;

	res = ft_substr(str, 0, 5);
	free(res);

	res = ft_substr(str, 5, 5);
	free(res);

	res = ft_substr(str, 5, 100);
	free(res);

	res = ft_substr(str, 10, 5);
	free(res);

	res = ft_substr(str, 11, 5);
	free(res);

	res = ft_substr(str, 20, 5);
	free(res);

	res = ft_substr(str, 0, 0);
	free(res);
}

void	debug_strjoin(void)
{
	char *res;

	res = ft_strjoin("42", "Gyeongsan");
	free(res);

	res = ft_strjoin("", "World");
	free(res);

	res = ft_strjoin("Hello", "");
	free(res);

	res = ft_strjoin("", "");
	free(res);

	res = ft_strjoin("Key=", "Value");
	free(res);
}

void debug_strtrim(void)
{
	char *s = ft_strtrim("  hello  ", " ");
	free(s);
}

void debug_split(void)
{
	char *s = "   hello  42     gyeongsan    ";
	char c = ' ';
	char **result;

	result = ft_split(s, c);
	int i = 0;
	if (result)
	{
		while (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
}

void debug_itoa(void)
{
	char *s = ft_itoa(-12345);
	printf("%s\n", s);
	free(s);
}

void debug_strmapi(void) { /* implementation */ }
void debug_striteri(void) { /* implementation */ }
void debug_putchar_fd(void) { ft_putchar_fd('A', 1); }
void debug_putstr_fd(void) { ft_putstr_fd("Hello", 1); }
void debug_putendl_fd(void) { ft_putendl_fd("Hello", 1); }
void debug_putnbr_fd(void) { ft_putnbr_fd(42, 1); }

// --- Bonus: List Functions ---
void debug_lstnew(void)
{
	t_list *node = ft_lstnew("Content");
	free(node);
}

void debug_lstadd_front(void) { /* implementation */ }
void debug_lstsize(void) { /* implementation */ }
void debug_lstlast(void) { /* implementation */ }
void debug_lstadd_back(void) { /* implementation */ }
void debug_lstdelone(void) { /* implementation */ }
void debug_lstclear(void) { /* implementation */ }
void debug_lstiter(void) { /* implementation */ }
void debug_lstmap(void) { /* implementation */ }

// --- Main Dispatcher ---
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: ./debug_test [function_name]\n");
		return (1);
	}

	char *cmd = argv[1];

	if (strcmp(cmd, "isalpha") == 0)
		debug_isalpha();
	else if (strcmp(cmd, "isdigit") == 0)
		debug_isdigit();
	else if (strcmp(cmd, "isalnum") == 0)
		debug_isalnum();
	else if (strcmp(cmd, "isascii") == 0)
		debug_isascii();
	else if (strcmp(cmd, "isprint") == 0)
		debug_isprint();
	else if (strcmp(cmd, "strlen") == 0)
		debug_strlen();
	else if (strcmp(cmd, "memset") == 0)
		debug_memset();
	else if (strcmp(cmd, "bzero") == 0)
		debug_bzero();
	else if (strcmp(cmd, "memcpy") == 0)
		debug_memcpy();
	else if (strcmp(cmd, "memmove") == 0)
		debug_memmove();
	else if (strcmp(cmd, "strlcpy") == 0)
		debug_strlcpy();
	else if (strcmp(cmd, "strlcat") == 0)
		debug_strlcat();
	else if (strcmp(cmd, "toupper") == 0)
		debug_toupper();
	else if (strcmp(cmd, "tolower") == 0)
		debug_tolower();
	else if (strcmp(cmd, "strchr") == 0)
		debug_strchr();
	else if (strcmp(cmd, "strrchr") == 0)
		debug_strrchr();
	else if (strcmp(cmd, "strncmp") == 0)
		debug_strncmp();
	else if (strcmp(cmd, "memchr") == 0)
		debug_memchr();
	else if (strcmp(cmd, "memcmp") == 0)
		debug_memcmp();
	else if (strcmp(cmd, "strnstr") == 0)
		debug_strnstr();
	else if (strcmp(cmd, "atoi") == 0)
		debug_atoi();
	else if (strcmp(cmd, "calloc") == 0)
		debug_calloc();
	else if (strcmp(cmd, "strdup") == 0)
		debug_strdup();
	else if (strcmp(cmd, "substr") == 0)
		debug_substr();
	else if (strcmp(cmd, "strjoin") == 0)
		debug_strjoin();
	else if (strcmp(cmd, "strtrim") == 0)
		debug_strtrim();
	else if (strcmp(cmd, "split") == 0)
		debug_split();
	else if (strcmp(cmd, "itoa") == 0)
		debug_itoa();
	else if (strcmp(cmd, "strmapi") == 0)
		debug_strmapi();
	else if (strcmp(cmd, "striteri") == 0)
		debug_striteri();
	else if (strcmp(cmd, "putchar_fd") == 0)
		debug_putchar_fd();
	else if (strcmp(cmd, "putstr_fd") == 0)
		debug_putstr_fd();
	else if (strcmp(cmd, "putendl_fd") == 0)
		debug_putendl_fd();
	else if (strcmp(cmd, "putnbr_fd") == 0)
		debug_putnbr_fd();
	else if (strcmp(cmd, "lstnew") == 0)
		debug_lstnew();
	else if (strcmp(cmd, "lstadd_front") == 0)
		debug_lstadd_front();
	else if (strcmp(cmd, "lstsize") == 0)
		debug_lstsize();
	else if (strcmp(cmd, "lstlast") == 0)
		debug_lstlast();
	else if (strcmp(cmd, "lstadd_back") == 0)
		debug_lstadd_back();
	else if (strcmp(cmd, "lstdelone") == 0)
		debug_lstdelone();
	else if (strcmp(cmd, "lstclear") == 0)
		debug_lstclear();
	else if (strcmp(cmd, "lstiter") == 0)
		debug_lstiter();
	else if (strcmp(cmd, "lstmap") == 0)
		debug_lstmap();
	else
		printf("Unknown function: %s\n", cmd);

	return (0);
}
