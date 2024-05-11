#include <stdlib.h>

void	ft_ft()
{
	char s[3];
	int openUser;
	int open1;
	int x = rand();
	int i = 0;


	for(int i1 = 0; i1 < 3; i1++)
		s[i1] = (i1 + x) % 3;
	
	openUser = rand() % 3;
	open1 = 0;
	while (!s[open1] || openUser == open1)
		open1++;
	i = 0;
	while (i == open1 || i == openUser)
		i++;
	if (!s[i])
		printf("win\n");
	else
		printf("looseeer\n");
	
}

int main()
{
	//stand(time(NULL));
	for(int i = 0; i < 10000000; i++)
		ft_ft();
}
