/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youellet <youellet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:53:52 by youellet          #+#    #+#             */
/*   Updated: 2023/11/04 20:12:45 by youellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int error_arg(char **argv)
{
    return (0);
}

int valide_arg1(char *argv)
{
    if ((*argv >= '0' && *argv <= '9') || (*argv == '-'))
        return (1);
    return (0);

}

int valide_arg2(char **argv)
{

    return (0);
}
