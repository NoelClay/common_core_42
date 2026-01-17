#include "libft.h"

//v2
// 프리
static void	*ft_charpp_free(char **chrpp, int last_idx)
{
	while(last_idx >= 0)
		free(chrpp[last_idx--]);
	free(chrpp);
	return (NULL);
}

// 카운트워드
static int	ft_count_word(const char *str, char chr)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		while (str[i] && str[i] == chr)
			i++;
		if (str[i])
		{
			res+=1;
			while (str[i] && str[i] != chr)
				i++;
		}
	}
	return (res);
}

// 스플릿
char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		ri;
	int		wi;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc(ft_count_word(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	ri = 0;
	wi = -1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			wi = i;
			while (s[i] && s[i] != c)
				i++;
			res[ri] = ft_substr(s, wi, i - wi);
			if (!res[ri])
				return (ft_charpp_free(res, ri - 1));
			ri++;
		}
	}
	res[ri] = NULL;
	return (res);
}

// 단어 추출 ft_substr


/*//v1
static int	ft_count_word(const char *s, char c)
{
	int		res;
	int		length;
	int		prev;
	char	*tmp;

	res = 0;
	prev = 0;
	while (s[prev])
	{
		tmp = ft_strchr((s + prev), c);
		if (!tmp)
			return (res + 1);
		length = tmp - (s + prev);
		if (length >= 1)
			res++;
		prev += (length + 1);
	}
	return (res);
}

static void	*ft_ptrptr_free(char** res, int size)
{
	int	i;

	i = 0;
	while(i < size)
		free(res[i++]);
	free(res);
	return (NULL);
}

static char	*ft_abstract_word(const char *str, int start, int end)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)ft_calloc((end - start + 1) + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (start <= end)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		cur_index;
	int		res_index;
	int		word_index;

	res = (char **)ft_calloc((ft_count_word(s, c) + 1), sizeof(char *));
	if(!res)
		return (NULL);
	cur_index = 0;
	res_index = 0;
	word_index = -1;
	while(cur_index <= ft_strlen(s))
	{
		if (s[cur_index] != c && word_index < 0)
			word_index = cur_index;
		if ((s[cur_index] == c || cur_index == ft_strlen(s)) && word_index >= 0)
		{
			res[res_index] = ft_abstract_word(s, word_index, (cur_index - 1));
			if(!res[res_index])
				return (ft_ptrptr_free(res, res_index + 1));
			word_index = -1;
			res_index++;
		}
		cur_index++;
	}
	return (res);
}
*/
