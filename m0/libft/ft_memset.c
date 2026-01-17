/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:36:30 by namykim           #+#    #+#             */
/*   Updated: 2025/12/25 15:36:32 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *) b;
	while (len > 0)
	{
		*(s++) = (unsigned char) c;
		len--;
	}
	return (b);
}

//int main() {
//    int arr[5] = {10, 20, 30, 40, 50};
//    printf("Before: ");
//    for(int i=0; i<5; i++) printf("%d ", arr[i]);
//    printf("\n");
//    ft_memset(arr, 0, sizeof(arr));
//    printf("After:  ");
//    for(int i=0; i<5; i++) printf("%d ", arr[i]);
//    printf("\n");
//    return 0;
//}
//int main() {
//    char buffer[20];
//    // memset을 사용하여 메모리 초기화 및 반환값 저장
//    void* result = ft_memset(buffer, 'A', sizeof(buffer));
//    printf("Original Address: %p\n", (void*)buffer);
//    printf("Returned Address: %p\n", result);
//    // 반환값 검증
//    if (result == (void*)buffer) {
//        printf("테스트 성공: 반환된 주소가 원래 주소와 일치합니다.\n");
//    } else {
//        printf("테스트 실패: 반환된 주소가 다릅니다.\n");
//    }
//    return 0;
//}