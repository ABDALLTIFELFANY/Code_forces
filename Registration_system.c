#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_data
{
    char *str;
    struct s_data *next;
}   t_data;

void	insert(t_data **root, char *item)
{
	t_data	*temp;
	t_data	*ptr;

	temp = malloc(sizeof(t_data));
	if (!temp)
		exit(0);
	temp -> str = item;
	temp -> next = NULL;
	if (*root == NULL)
		*root = temp;
	else
	{
		ptr = *root;
		while (ptr-> next != NULL)
			ptr = ptr->next;
		ptr -> next = temp;
	}
}

int main()
{
    int x,a,b,c;
    t_data *tab = NULL;
    t_data *pol = NULL;
    t_data *save = NULL;
    
    scanf("%d", &x);
    char *str;
    a = 0;
    while(a < x)
    {
        str = calloc(1,32);
        scanf("%s", str);
        insert(&tab,str);
        a++;
    }
    a = 0;
    save = tab;
    while(a < x)
    {
        pol = tab -> next;
        b = a + 1;
        while(b < x)
        {
            if(strcmp(tab -> str,pol -> str) == 0)
            {
                c = 0;
                while(tab -> str[c])
                    c++;
                if(tab->str[strlen(tab->str)-1] == '1')
                    pol -> str[c - 1] = '2';
                else
                    pol -> str[c] = '1';
                pol -> str[c + 1] = 0;
            }
            pol = pol -> next;
            b++;
        }
        tab = tab -> next;
        a++;
    }
    tab = save;
    while(tab)
    {
        if(tab -> str[strlen(tab -> str) - 1] >= '1' && tab -> str[strlen(tab -> str) - 1] <= '9')
            printf("%s\n", tab -> str);
        else
            printf("OK\n");
        tab = tab -> next;
    }
    return 0;
}