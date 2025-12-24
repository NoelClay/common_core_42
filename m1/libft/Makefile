# NAME은 MakeFile의 디폴트 실행 결과 파일명이다. 즉 만들고자하는 파일의 이름임.
# "NAME에 libft.a를 할당하라."
NAME = libft.a

# CC는 C Compiler 의 종류이다. 
# "CC 변수에 cc를 할당하라."
CC = cc

# CFLAGS 는  컴파일 규칙 옵션 변수이다.
# Wall는 warning all의 준말
# Wextra는 warning extra의 준말
# Werror는 warning error의 준말
# "컴파일 규칙 옵션 변수에 모든 표준 경고, 모든 잠재 경고를 에러로 처리하라는 옵션 값을 할당하라"
CFLAGS = -Wall -Wextra -Werror

# SRCS는 커스텀 변수이다. 주로 c파일을 나열한다.
SRCS = ft_split.c

# OBJS 커스텀 변수이다. 주로 오브젝트 파일들을 나열한다.
# $() 변수 사용 할때 지켜야할 양식이다.
# "$(SRCS:.c=.o) SRCS 변수값을 불러올때 .c를 .o로 치환한 결과를 만든다."
OBJS = $(SRCS:.c=.o)

# NAME 변수가 사용될때 어떤 동작을 취할지 정의한다. 
# : 의존성을 구분하는 기호이다. NAME이 호출되면 OBJS는 자동 호출이다.
# 줄바꾸고 탭으로 띄운건 의존성까지 완벽 호출이되고 나면 수행할 동작을 지정한다.
# ar 명령어는 ar [생성할파일명] [압축당할파일명리스트] 로 구성되며, 오브젝트 파일을 archive 파일로 압축할때 사용하는 명령어
# "NAME이 호출되면 OBJS를 확인하여 없으면 OBJS먼저 실행하고, 이후 NAME값으로 파일명을 가지는 압축파일을 생성할때 OBJS로 압축을 한다."
$(NAME):$(OBJS)
	ar $(NAME) $(OBJS)

# all은 makefile이 존재하는 위치에서 make를 실행하면 수행되는 명령이 all 이다.
# "all에 NAME 변수를 할당하라."
all: $(NAME)

# clean은 빌드된 중간 파일을 보통 삭제한다.
clean:
	rm -f $(OBJS)

# fclean은 빌드 결과물까지도 삭제하는 것이다.
fclean: clean
	rm -f $(NAME)

# re는 fclean 하고 다시 빌드하고 압축까지 하는 과정을 다시 하는 것
re: fclean all
