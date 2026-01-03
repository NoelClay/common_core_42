/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:33:15 by namykim           #+#    #+#             */
/*   Updated: 2025/12/25 18:33:16 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s1 + i) = *((unsigned char *)s2 + i);
		i++;
	}
	return (s1);
}

/*
#include <string.h>
#include <assert.h>

void run_test(char *test_name, void *dest_ft, 
void *dest_std, const void *src, size_t n)
{
    printf("Testing: %s... ", test_name);
    
    // 두 버퍼를 동일하게 초기화
    memset(dest_ft, 0, 20);
    memset(dest_std, 0, 20);

    // ft_memcpy와 표준 memcpy 실행
    void *ret_ft = ft_memcpy(dest_ft, src, n);
    void *ret_std = memcpy(dest_std, src, n);

    // 1. 리턴 값(dest 주소) 비교
    assert(ret_ft == dest_ft);
    // 2. 실제 메모리 내용 비교
    assert(memcmp(dest_ft, dest_std, 20) == 0);

    printf("PASSED ✅\n");
}

int main()
{
    char dest_ft[50];
    char dest_std[50];

    printf("=== ft_memcpy Test Start ===\n\n");

    // 케이스 1: 일반 문자열 복사
    run_test("Basic String Copy", dest_ft, dest_std, "Hello World", 11);

    // 케이스 2: 0 바이트 복사 (데이터가 변하지 않아야 함)
    run_test("Zero Byte Copy", dest_ft, dest_std, "Don't copy me", 0);

    // 케이스 3: 정수형 배열 복사
    int src_ints[] = {1, 2, 3, 4, 5};
    int dest_ints_ft[5];
    int dest_ints_std[5];
    ft_memcpy(dest_ints_ft, src_ints, sizeof(src_ints));
    memcpy(dest_ints_std, src_ints, sizeof(src_ints));
    assert(memcmp(dest_ints_ft, dest_ints_std, sizeof(src_ints)) == 0);
    printf("Testing: Integer Array Copy... PASSED ✅\n");

    // 케이스 4: 큰 데이터의 중간 부분만 복사
    run_test("Partial Copy", dest_ft, dest_std, "Very long string indeed", 5);

    printf("\n=== All Tests Passed! ===\n");
    return 0;
}*/
