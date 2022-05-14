#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	int output;

	output = ft_str_is_alpha("asdf");
	printf("This contains a character so it prints: %d\n", output);

	output = ft_str_is_alpha("QWERTY");
	printf("This contains a character so it prints: %d\n", output);

	output = ft_str_is_alpha("asdf1234");
	printf("This contains mixtures of character and numbers so it prints: %d\n", output);

	output = ft_str_is_alpha("999");
	printf("This contains other character so it prints: %d\n", output);

	output = ft_str_is_alpha("");
	printf("This is empty so it prints: %d\n", output);

	return(0);

}
