/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:10:54 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/27 12:52:46 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int ft_check (char *s1, char *s2)
{
    int c;
    int i;

    c = 0;
    i = 0;    
    
    while (s2[i] != '\0')
    {
        if (s1[c] == s2[i])
        {
            i++;
            c++; 
        }         
        else
        {
            i++;
        }
        
    } 
    if (s1[c] == '\0')
    {
     
        return 1;
    } 

    else
    {
   
        return 0;
    }

}

void ft_wdmatch (char *s1, char *s2)
{
    int c;
    int i;

    c = 0;
    i = ft_check(s1, s2);
    while (s1[c] != '\0' && i == 1)
        {
            ft_putchar(s1[c]);
            c++;
        }
    ft_putchar('\n');     
}




int main (int argc, char **argv)
{

    ft_wdmatch(argv[1],argv[2]);
    return 0;
    
}