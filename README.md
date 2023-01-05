# Проект Libft

### Файлы с бонусами
> *Оригинальная мысль? Нет ничего легче. Библиотеки просто набиты ими. (Лжец)*
* [**Makefile**](https://github.com/i-galimov/libft/blob/main/libft/Makefile)
* [**Header**](https://github.com/i-galimov/libft/blob/main/libft/libft.h)
* [**ft_split**](https://github.com/i-galimov/libft/blob/main/libft/ft_split.c)
* [**ft_lstmap**](https://github.com/i-galimov/libft/blob/main/libft/ft_lstmap.c)
* [**Other**](https://github.com/i-galimov/libft/tree/main/libft)
---
### [Пример кода](https://github.com/i-galimov/libft/blob/main/libft/ft_memcpy.c) 
> *Все точное — коротко...*
```
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
```
********
> ***Есть только одно действительно неистощимое сокровище — это большая библиотека.
Пьер Буаст (1765–1824) — французский лексикограф***
> 
![Библиотека](https://media.proglib.io/wp-uploads/2019/02/books-lit@2x-e1550903308223.jpg)
