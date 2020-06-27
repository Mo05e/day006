/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:39:52 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/27 10:49:24 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[]) {
   char temp;
   char *str;
   int i, j;
   if(argc!=2){
       printf("Invalid Usage.\n");
       printf("Usage Example: ./a.out string reverse");
       return 1;
   }
    
   str = argv[1];
   i = 0; 
   j = strlen(str) - 1;
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   } 
   printf(str);
   return 0;
}
