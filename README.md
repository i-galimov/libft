# Проект Libft

### Файлы "Либы"
> *Дорогу осилит плывущий*
* [**Makefile**](https://github.com/i-galimov/libft/blob/main/libft/Makefile)
* [**Header**](https://github.com/i-galimov/libft/blob/main/libft/libft.h)
* [**ft_split**](https://github.com/i-galimov/libft/blob/main/libft/ft_split.c)
* [**ft_lstmap**](https://github.com/i-galimov/libft/blob/main/libft/ft_lstmap.c)
* [**Other**](https://github.com/i-galimov/libft/tree/main/libft)
---
### [Пример кода](https://github.com/i-galimov/libft/blob/main/libft/ft_memcpy.c) 
> *Все точное — коротко*
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
![Библиотека](https://cdn.pixabay.com/photo/2016/09/08/22/43/books-1655783_1280.jpg)
